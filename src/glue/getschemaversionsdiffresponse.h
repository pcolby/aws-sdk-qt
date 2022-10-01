// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMAVERSIONSDIFFRESPONSE_H
#define QTAWS_GETSCHEMAVERSIONSDIFFRESPONSE_H

#include "glueresponse.h"
#include "getschemaversionsdiffrequest.h"

namespace QtAws {
namespace Glue {

class GetSchemaVersionsDiffResponsePrivate;

class QTAWSGLUE_EXPORT GetSchemaVersionsDiffResponse : public GlueResponse {
    Q_OBJECT

public:
    GetSchemaVersionsDiffResponse(const GetSchemaVersionsDiffRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSchemaVersionsDiffRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSchemaVersionsDiffResponse)
    Q_DISABLE_COPY(GetSchemaVersionsDiffResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
