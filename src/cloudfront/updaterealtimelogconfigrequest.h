// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREALTIMELOGCONFIGREQUEST_H
#define QTAWS_UPDATEREALTIMELOGCONFIGREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateRealtimeLogConfigRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateRealtimeLogConfigRequest : public CloudFrontRequest {

public:
    UpdateRealtimeLogConfigRequest(const UpdateRealtimeLogConfigRequest &other);
    UpdateRealtimeLogConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRealtimeLogConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
