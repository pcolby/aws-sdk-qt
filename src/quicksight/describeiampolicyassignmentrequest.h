// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIAMPOLICYASSIGNMENTREQUEST_H
#define QTAWS_DESCRIBEIAMPOLICYASSIGNMENTREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeIAMPolicyAssignmentRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeIAMPolicyAssignmentRequest : public QuickSightRequest {

public:
    DescribeIAMPolicyAssignmentRequest(const DescribeIAMPolicyAssignmentRequest &other);
    DescribeIAMPolicyAssignmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIAMPolicyAssignmentRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
