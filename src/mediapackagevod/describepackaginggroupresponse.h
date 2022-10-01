// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGINGGROUPRESPONSE_H
#define QTAWS_DESCRIBEPACKAGINGGROUPRESPONSE_H

#include "mediapackagevodresponse.h"
#include "describepackaginggrouprequest.h"

namespace QtAws {
namespace MediaPackageVod {

class DescribePackagingGroupResponsePrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT DescribePackagingGroupResponse : public MediaPackageVodResponse {
    Q_OBJECT

public:
    DescribePackagingGroupResponse(const DescribePackagingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePackagingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePackagingGroupResponse)
    Q_DISABLE_COPY(DescribePackagingGroupResponse)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
