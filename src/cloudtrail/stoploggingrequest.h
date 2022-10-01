// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPLOGGINGREQUEST_H
#define QTAWS_STOPLOGGINGREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class StopLoggingRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT StopLoggingRequest : public CloudTrailRequest {

public:
    StopLoggingRequest(const StopLoggingRequest &other);
    StopLoggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopLoggingRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
