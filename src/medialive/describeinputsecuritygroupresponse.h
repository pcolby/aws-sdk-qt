// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTSECURITYGROUPRESPONSE_H
#define QTAWS_DESCRIBEINPUTSECURITYGROUPRESPONSE_H

#include "medialiveresponse.h"
#include "describeinputsecuritygrouprequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeInputSecurityGroupResponsePrivate;

class QTAWSMEDIALIVE_EXPORT DescribeInputSecurityGroupResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    DescribeInputSecurityGroupResponse(const DescribeInputSecurityGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInputSecurityGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInputSecurityGroupResponse)
    Q_DISABLE_COPY(DescribeInputSecurityGroupResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
