// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREALTIMELOGCONFIGRESPONSE_H
#define QTAWS_DELETEREALTIMELOGCONFIGRESPONSE_H

#include "cloudfrontresponse.h"
#include "deleterealtimelogconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteRealtimeLogConfigResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteRealtimeLogConfigResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    DeleteRealtimeLogConfigResponse(const DeleteRealtimeLogConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRealtimeLogConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRealtimeLogConfigResponse)
    Q_DISABLE_COPY(DeleteRealtimeLogConfigResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
