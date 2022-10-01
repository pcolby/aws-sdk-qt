// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOLUMESMODIFICATIONSRESPONSE_H
#define QTAWS_DESCRIBEVOLUMESMODIFICATIONSRESPONSE_H

#include "ec2response.h"
#include "describevolumesmodificationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVolumesModificationsResponsePrivate;

class QTAWSEC2_EXPORT DescribeVolumesModificationsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeVolumesModificationsResponse(const DescribeVolumesModificationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVolumesModificationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVolumesModificationsResponse)
    Q_DISABLE_COPY(DescribeVolumesModificationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
