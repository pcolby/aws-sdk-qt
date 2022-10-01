// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIONSRESPONSE_H
#define QTAWS_GETCONNECTIONSRESPONSE_H

#include "glueresponse.h"
#include "getconnectionsrequest.h"

namespace QtAws {
namespace Glue {

class GetConnectionsResponsePrivate;

class QTAWSGLUE_EXPORT GetConnectionsResponse : public GlueResponse {
    Q_OBJECT

public:
    GetConnectionsResponse(const GetConnectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConnectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectionsResponse)
    Q_DISABLE_COPY(GetConnectionsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
