// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERSCHEMAVERSIONRESPONSE_H
#define QTAWS_REGISTERSCHEMAVERSIONRESPONSE_H

#include "glueresponse.h"
#include "registerschemaversionrequest.h"

namespace QtAws {
namespace Glue {

class RegisterSchemaVersionResponsePrivate;

class QTAWSGLUE_EXPORT RegisterSchemaVersionResponse : public GlueResponse {
    Q_OBJECT

public:
    RegisterSchemaVersionResponse(const RegisterSchemaVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterSchemaVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterSchemaVersionResponse)
    Q_DISABLE_COPY(RegisterSchemaVersionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
