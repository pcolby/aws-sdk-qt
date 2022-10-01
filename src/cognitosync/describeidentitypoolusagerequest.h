// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPOOLUSAGEREQUEST_H
#define QTAWS_DESCRIBEIDENTITYPOOLUSAGEREQUEST_H

#include "cognitosyncrequest.h"

namespace QtAws {
namespace CognitoSync {

class DescribeIdentityPoolUsageRequestPrivate;

class QTAWSCOGNITOSYNC_EXPORT DescribeIdentityPoolUsageRequest : public CognitoSyncRequest {

public:
    DescribeIdentityPoolUsageRequest(const DescribeIdentityPoolUsageRequest &other);
    DescribeIdentityPoolUsageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIdentityPoolUsageRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
