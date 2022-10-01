// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOLUMESTATUSRESPONSE_H
#define QTAWS_DESCRIBEVOLUMESTATUSRESPONSE_H

#include "ec2response.h"
#include "describevolumestatusrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVolumeStatusResponsePrivate;

class QTAWSEC2_EXPORT DescribeVolumeStatusResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeVolumeStatusResponse(const DescribeVolumeStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVolumeStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVolumeStatusResponse)
    Q_DISABLE_COPY(DescribeVolumeStatusResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
