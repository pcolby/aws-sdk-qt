// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAILSTATUSRESPONSE_H
#define QTAWS_GETTRAILSTATUSRESPONSE_H

#include "cloudtrailresponse.h"
#include "gettrailstatusrequest.h"

namespace QtAws {
namespace CloudTrail {

class GetTrailStatusResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT GetTrailStatusResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    GetTrailStatusResponse(const GetTrailStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTrailStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTrailStatusResponse)
    Q_DISABLE_COPY(GetTrailStatusResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
