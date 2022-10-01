// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYUSAGEREQUEST_H
#define QTAWS_DESCRIBEIDENTITYUSAGEREQUEST_H

#include "cognitosyncrequest.h"

namespace QtAws {
namespace CognitoSync {

class DescribeIdentityUsageRequestPrivate;

class QTAWSCOGNITOSYNC_EXPORT DescribeIdentityUsageRequest : public CognitoSyncRequest {

public:
    DescribeIdentityUsageRequest(const DescribeIdentityUsageRequest &other);
    DescribeIdentityUsageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIdentityUsageRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
