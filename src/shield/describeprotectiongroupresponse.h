// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROTECTIONGROUPRESPONSE_H
#define QTAWS_DESCRIBEPROTECTIONGROUPRESPONSE_H

#include "shieldresponse.h"
#include "describeprotectiongrouprequest.h"

namespace QtAws {
namespace Shield {

class DescribeProtectionGroupResponsePrivate;

class QTAWSSHIELD_EXPORT DescribeProtectionGroupResponse : public ShieldResponse {
    Q_OBJECT

public:
    DescribeProtectionGroupResponse(const DescribeProtectionGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProtectionGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProtectionGroupResponse)
    Q_DISABLE_COPY(DescribeProtectionGroupResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
