// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREALTIMELOGCONFIGRESPONSE_H
#define QTAWS_GETREALTIMELOGCONFIGRESPONSE_H

#include "cloudfrontresponse.h"
#include "getrealtimelogconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetRealtimeLogConfigResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetRealtimeLogConfigResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetRealtimeLogConfigResponse(const GetRealtimeLogConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRealtimeLogConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRealtimeLogConfigResponse)
    Q_DISABLE_COPY(GetRealtimeLogConfigResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
