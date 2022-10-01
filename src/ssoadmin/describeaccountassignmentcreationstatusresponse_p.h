// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTASSIGNMENTCREATIONSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBEACCOUNTASSIGNMENTCREATIONSTATUSRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class DescribeAccountAssignmentCreationStatusResponse;

class DescribeAccountAssignmentCreationStatusResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit DescribeAccountAssignmentCreationStatusResponsePrivate(DescribeAccountAssignmentCreationStatusResponse * const q);

    void parseDescribeAccountAssignmentCreationStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccountAssignmentCreationStatusResponse)
    Q_DISABLE_COPY(DescribeAccountAssignmentCreationStatusResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
