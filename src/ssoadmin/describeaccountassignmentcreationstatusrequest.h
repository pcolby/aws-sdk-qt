// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTASSIGNMENTCREATIONSTATUSREQUEST_H
#define QTAWS_DESCRIBEACCOUNTASSIGNMENTCREATIONSTATUSREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DescribeAccountAssignmentCreationStatusRequestPrivate;

class QTAWSSSOADMIN_EXPORT DescribeAccountAssignmentCreationStatusRequest : public SsoAdminRequest {

public:
    DescribeAccountAssignmentCreationStatusRequest(const DescribeAccountAssignmentCreationStatusRequest &other);
    DescribeAccountAssignmentCreationStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountAssignmentCreationStatusRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
