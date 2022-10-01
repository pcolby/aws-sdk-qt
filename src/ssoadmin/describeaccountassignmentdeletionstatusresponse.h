// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTASSIGNMENTDELETIONSTATUSRESPONSE_H
#define QTAWS_DESCRIBEACCOUNTASSIGNMENTDELETIONSTATUSRESPONSE_H

#include "ssoadminresponse.h"
#include "describeaccountassignmentdeletionstatusrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DescribeAccountAssignmentDeletionStatusResponsePrivate;

class QTAWSSSOADMIN_EXPORT DescribeAccountAssignmentDeletionStatusResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    DescribeAccountAssignmentDeletionStatusResponse(const DescribeAccountAssignmentDeletionStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccountAssignmentDeletionStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountAssignmentDeletionStatusResponse)
    Q_DISABLE_COPY(DescribeAccountAssignmentDeletionStatusResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
