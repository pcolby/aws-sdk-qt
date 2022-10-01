// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTASSIGNMENTDELETIONSTATUSREQUEST_H
#define QTAWS_DESCRIBEACCOUNTASSIGNMENTDELETIONSTATUSREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DescribeAccountAssignmentDeletionStatusRequestPrivate;

class QTAWSSSOADMIN_EXPORT DescribeAccountAssignmentDeletionStatusRequest : public SsoAdminRequest {

public:
    DescribeAccountAssignmentDeletionStatusRequest(const DescribeAccountAssignmentDeletionStatusRequest &other);
    DescribeAccountAssignmentDeletionStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountAssignmentDeletionStatusRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
