// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMYUSERPROFILEREQUEST_H
#define QTAWS_DESCRIBEMYUSERPROFILEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeMyUserProfileRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeMyUserProfileRequest : public OpsWorksRequest {

public:
    DescribeMyUserProfileRequest(const DescribeMyUserProfileRequest &other);
    DescribeMyUserProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMyUserProfileRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
