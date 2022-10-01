// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMACREATIONSTATUSRESPONSE_H
#define QTAWS_GETSCHEMACREATIONSTATUSRESPONSE_H

#include "appsyncresponse.h"
#include "getschemacreationstatusrequest.h"

namespace QtAws {
namespace AppSync {

class GetSchemaCreationStatusResponsePrivate;

class QTAWSAPPSYNC_EXPORT GetSchemaCreationStatusResponse : public AppSyncResponse {
    Q_OBJECT

public:
    GetSchemaCreationStatusResponse(const GetSchemaCreationStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSchemaCreationStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSchemaCreationStatusResponse)
    Q_DISABLE_COPY(GetSchemaCreationStatusResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
