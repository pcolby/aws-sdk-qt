// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREALTIMELOGCONFIGSREQUEST_H
#define QTAWS_LISTREALTIMELOGCONFIGSREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListRealtimeLogConfigsRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListRealtimeLogConfigsRequest : public CloudFrontRequest {

public:
    ListRealtimeLogConfigsRequest(const ListRealtimeLogConfigsRequest &other);
    ListRealtimeLogConfigsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRealtimeLogConfigsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
