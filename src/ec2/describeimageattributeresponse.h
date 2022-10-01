// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEATTRIBUTERESPONSE_H
#define QTAWS_DESCRIBEIMAGEATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "describeimageattributerequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeImageAttributeResponsePrivate;

class QTAWSEC2_EXPORT DescribeImageAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeImageAttributeResponse(const DescribeImageAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeImageAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImageAttributeResponse)
    Q_DISABLE_COPY(DescribeImageAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
