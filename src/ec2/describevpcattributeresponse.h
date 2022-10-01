// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCATTRIBUTERESPONSE_H
#define QTAWS_DESCRIBEVPCATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "describevpcattributerequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcAttributeResponsePrivate;

class QTAWSEC2_EXPORT DescribeVpcAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeVpcAttributeResponse(const DescribeVpcAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVpcAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcAttributeResponse)
    Q_DISABLE_COPY(DescribeVpcAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
