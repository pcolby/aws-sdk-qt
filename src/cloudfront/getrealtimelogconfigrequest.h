// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREALTIMELOGCONFIGREQUEST_H
#define QTAWS_GETREALTIMELOGCONFIGREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetRealtimeLogConfigRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetRealtimeLogConfigRequest : public CloudFrontRequest {

public:
    GetRealtimeLogConfigRequest(const GetRealtimeLogConfigRequest &other);
    GetRealtimeLogConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRealtimeLogConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
