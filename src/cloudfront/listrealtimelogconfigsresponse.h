// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREALTIMELOGCONFIGSRESPONSE_H
#define QTAWS_LISTREALTIMELOGCONFIGSRESPONSE_H

#include "cloudfrontresponse.h"
#include "listrealtimelogconfigsrequest.h"

namespace QtAws {
namespace CloudFront {

class ListRealtimeLogConfigsResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListRealtimeLogConfigsResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListRealtimeLogConfigsResponse(const ListRealtimeLogConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRealtimeLogConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRealtimeLogConfigsResponse)
    Q_DISABLE_COPY(ListRealtimeLogConfigsResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
