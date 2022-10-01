// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIAMPOLICYASSIGNMENTSRESPONSE_H
#define QTAWS_LISTIAMPOLICYASSIGNMENTSRESPONSE_H

#include "quicksightresponse.h"
#include "listiampolicyassignmentsrequest.h"

namespace QtAws {
namespace QuickSight {

class ListIAMPolicyAssignmentsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT ListIAMPolicyAssignmentsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListIAMPolicyAssignmentsResponse(const ListIAMPolicyAssignmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIAMPolicyAssignmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIAMPolicyAssignmentsResponse)
    Q_DISABLE_COPY(ListIAMPolicyAssignmentsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
