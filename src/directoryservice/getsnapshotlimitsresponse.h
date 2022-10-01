// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTLIMITSRESPONSE_H
#define QTAWS_GETSNAPSHOTLIMITSRESPONSE_H

#include "directoryserviceresponse.h"
#include "getsnapshotlimitsrequest.h"

namespace QtAws {
namespace DirectoryService {

class GetSnapshotLimitsResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT GetSnapshotLimitsResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    GetSnapshotLimitsResponse(const GetSnapshotLimitsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSnapshotLimitsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSnapshotLimitsResponse)
    Q_DISABLE_COPY(GetSnapshotLimitsResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
