// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIAMPOLICYASSIGNMENTSFORUSERRESPONSE_H
#define QTAWS_LISTIAMPOLICYASSIGNMENTSFORUSERRESPONSE_H

#include "quicksightresponse.h"
#include "listiampolicyassignmentsforuserrequest.h"

namespace QtAws {
namespace QuickSight {

class ListIAMPolicyAssignmentsForUserResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT ListIAMPolicyAssignmentsForUserResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListIAMPolicyAssignmentsForUserResponse(const ListIAMPolicyAssignmentsForUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIAMPolicyAssignmentsForUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIAMPolicyAssignmentsForUserResponse)
    Q_DISABLE_COPY(ListIAMPolicyAssignmentsForUserResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
