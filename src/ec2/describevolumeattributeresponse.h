// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOLUMEATTRIBUTERESPONSE_H
#define QTAWS_DESCRIBEVOLUMEATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "describevolumeattributerequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVolumeAttributeResponsePrivate;

class QTAWSEC2_EXPORT DescribeVolumeAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeVolumeAttributeResponse(const DescribeVolumeAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVolumeAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVolumeAttributeResponse)
    Q_DISABLE_COPY(DescribeVolumeAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
