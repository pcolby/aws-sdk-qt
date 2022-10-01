// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREALTIMELOGCONFIGREQUEST_H
#define QTAWS_DELETEREALTIMELOGCONFIGREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteRealtimeLogConfigRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteRealtimeLogConfigRequest : public CloudFrontRequest {

public:
    DeleteRealtimeLogConfigRequest(const DeleteRealtimeLogConfigRequest &other);
    DeleteRealtimeLogConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRealtimeLogConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
