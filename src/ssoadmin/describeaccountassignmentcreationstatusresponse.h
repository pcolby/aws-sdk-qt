// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTASSIGNMENTCREATIONSTATUSRESPONSE_H
#define QTAWS_DESCRIBEACCOUNTASSIGNMENTCREATIONSTATUSRESPONSE_H

#include "ssoadminresponse.h"
#include "describeaccountassignmentcreationstatusrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DescribeAccountAssignmentCreationStatusResponsePrivate;

class QTAWSSSOADMIN_EXPORT DescribeAccountAssignmentCreationStatusResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    DescribeAccountAssignmentCreationStatusResponse(const DescribeAccountAssignmentCreationStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccountAssignmentCreationStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountAssignmentCreationStatusResponse)
    Q_DISABLE_COPY(DescribeAccountAssignmentCreationStatusResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
