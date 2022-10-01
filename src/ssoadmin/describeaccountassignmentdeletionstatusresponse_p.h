// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTASSIGNMENTDELETIONSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBEACCOUNTASSIGNMENTDELETIONSTATUSRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class DescribeAccountAssignmentDeletionStatusResponse;

class DescribeAccountAssignmentDeletionStatusResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit DescribeAccountAssignmentDeletionStatusResponsePrivate(DescribeAccountAssignmentDeletionStatusResponse * const q);

    void parseDescribeAccountAssignmentDeletionStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccountAssignmentDeletionStatusResponse)
    Q_DISABLE_COPY(DescribeAccountAssignmentDeletionStatusResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
