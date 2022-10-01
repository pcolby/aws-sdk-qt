// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIAMPOLICYASSIGNMENTSFORUSERREQUEST_H
#define QTAWS_LISTIAMPOLICYASSIGNMENTSFORUSERREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class ListIAMPolicyAssignmentsForUserRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT ListIAMPolicyAssignmentsForUserRequest : public QuickSightRequest {

public:
    ListIAMPolicyAssignmentsForUserRequest(const ListIAMPolicyAssignmentsForUserRequest &other);
    ListIAMPolicyAssignmentsForUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIAMPolicyAssignmentsForUserRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
