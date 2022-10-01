// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMARESPONSE_H
#define QTAWS_GETSCHEMARESPONSE_H

#include "glueresponse.h"
#include "getschemarequest.h"

namespace QtAws {
namespace Glue {

class GetSchemaResponsePrivate;

class QTAWSGLUE_EXPORT GetSchemaResponse : public GlueResponse {
    Q_OBJECT

public:
    GetSchemaResponse(const GetSchemaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSchemaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSchemaResponse)
    Q_DISABLE_COPY(GetSchemaResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
