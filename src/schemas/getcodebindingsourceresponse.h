// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCODEBINDINGSOURCERESPONSE_H
#define QTAWS_GETCODEBINDINGSOURCERESPONSE_H

#include "schemasresponse.h"
#include "getcodebindingsourcerequest.h"

namespace QtAws {
namespace Schemas {

class GetCodeBindingSourceResponsePrivate;

class QTAWSSCHEMAS_EXPORT GetCodeBindingSourceResponse : public SchemasResponse {
    Q_OBJECT

public:
    GetCodeBindingSourceResponse(const GetCodeBindingSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCodeBindingSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCodeBindingSourceResponse)
    Q_DISABLE_COPY(GetCodeBindingSourceResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
