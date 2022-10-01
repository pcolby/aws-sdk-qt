// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTLOGGINGREQUEST_H
#define QTAWS_STARTLOGGINGREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class StartLoggingRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT StartLoggingRequest : public CloudTrailRequest {

public:
    StartLoggingRequest(const StartLoggingRequest &other);
    StartLoggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartLoggingRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
