// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATABASESRESPONSE_H
#define QTAWS_GETDATABASESRESPONSE_H

#include "glueresponse.h"
#include "getdatabasesrequest.h"

namespace QtAws {
namespace Glue {

class GetDatabasesResponsePrivate;

class QTAWSGLUE_EXPORT GetDatabasesResponse : public GlueResponse {
    Q_OBJECT

public:
    GetDatabasesResponse(const GetDatabasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDatabasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDatabasesResponse)
    Q_DISABLE_COPY(GetDatabasesResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
