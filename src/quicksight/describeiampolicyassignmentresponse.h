// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIAMPOLICYASSIGNMENTRESPONSE_H
#define QTAWS_DESCRIBEIAMPOLICYASSIGNMENTRESPONSE_H

#include "quicksightresponse.h"
#include "describeiampolicyassignmentrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeIAMPolicyAssignmentResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeIAMPolicyAssignmentResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeIAMPolicyAssignmentResponse(const DescribeIAMPolicyAssignmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIAMPolicyAssignmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIAMPolicyAssignmentResponse)
    Q_DISABLE_COPY(DescribeIAMPolicyAssignmentResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
