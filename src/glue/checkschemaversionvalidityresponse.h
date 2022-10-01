// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKSCHEMAVERSIONVALIDITYRESPONSE_H
#define QTAWS_CHECKSCHEMAVERSIONVALIDITYRESPONSE_H

#include "glueresponse.h"
#include "checkschemaversionvalidityrequest.h"

namespace QtAws {
namespace Glue {

class CheckSchemaVersionValidityResponsePrivate;

class QTAWSGLUE_EXPORT CheckSchemaVersionValidityResponse : public GlueResponse {
    Q_OBJECT

public:
    CheckSchemaVersionValidityResponse(const CheckSchemaVersionValidityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CheckSchemaVersionValidityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckSchemaVersionValidityResponse)
    Q_DISABLE_COPY(CheckSchemaVersionValidityResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
