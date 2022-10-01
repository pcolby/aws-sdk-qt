// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMAVERSIONRESPONSE_H
#define QTAWS_GETSCHEMAVERSIONRESPONSE_H

#include "glueresponse.h"
#include "getschemaversionrequest.h"

namespace QtAws {
namespace Glue {

class GetSchemaVersionResponsePrivate;

class QTAWSGLUE_EXPORT GetSchemaVersionResponse : public GlueResponse {
    Q_OBJECT

public:
    GetSchemaVersionResponse(const GetSchemaVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSchemaVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSchemaVersionResponse)
    Q_DISABLE_COPY(GetSchemaVersionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
