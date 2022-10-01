// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREALTIMELOGCONFIGRESPONSE_H
#define QTAWS_UPDATEREALTIMELOGCONFIGRESPONSE_H

#include "cloudfrontresponse.h"
#include "updaterealtimelogconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateRealtimeLogConfigResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateRealtimeLogConfigResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    UpdateRealtimeLogConfigResponse(const UpdateRealtimeLogConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRealtimeLogConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRealtimeLogConfigResponse)
    Q_DISABLE_COPY(UpdateRealtimeLogConfigResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
