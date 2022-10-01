// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCODEBINDINGRESPONSE_H
#define QTAWS_PUTCODEBINDINGRESPONSE_H

#include "schemasresponse.h"
#include "putcodebindingrequest.h"

namespace QtAws {
namespace Schemas {

class PutCodeBindingResponsePrivate;

class QTAWSSCHEMAS_EXPORT PutCodeBindingResponse : public SchemasResponse {
    Q_OBJECT

public:
    PutCodeBindingResponse(const PutCodeBindingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutCodeBindingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutCodeBindingResponse)
    Q_DISABLE_COPY(PutCodeBindingResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
