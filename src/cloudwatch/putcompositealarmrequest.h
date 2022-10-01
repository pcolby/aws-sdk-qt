// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCOMPOSITEALARMREQUEST_H
#define QTAWS_PUTCOMPOSITEALARMREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutCompositeAlarmRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT PutCompositeAlarmRequest : public CloudWatchRequest {

public:
    PutCompositeAlarmRequest(const PutCompositeAlarmRequest &other);
    PutCompositeAlarmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutCompositeAlarmRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
