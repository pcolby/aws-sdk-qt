// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPAMSRESPONSE_H
#define QTAWS_DESCRIBEIPAMSRESPONSE_H

#include "ec2response.h"
#include "describeipamsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeIpamsResponsePrivate;

class QTAWSEC2_EXPORT DescribeIpamsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeIpamsResponse(const DescribeIpamsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIpamsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIpamsResponse)
    Q_DISABLE_COPY(DescribeIpamsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
