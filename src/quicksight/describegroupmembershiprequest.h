// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPMEMBERSHIPREQUEST_H
#define QTAWS_DESCRIBEGROUPMEMBERSHIPREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeGroupMembershipRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeGroupMembershipRequest : public QuickSightRequest {

public:
    DescribeGroupMembershipRequest(const DescribeGroupMembershipRequest &other);
    DescribeGroupMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGroupMembershipRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
