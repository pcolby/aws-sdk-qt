// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPMEMBERSHIPRESPONSE_H
#define QTAWS_DESCRIBEGROUPMEMBERSHIPRESPONSE_H

#include "quicksightresponse.h"
#include "describegroupmembershiprequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeGroupMembershipResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeGroupMembershipResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeGroupMembershipResponse(const DescribeGroupMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGroupMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGroupMembershipResponse)
    Q_DISABLE_COPY(DescribeGroupMembershipResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
