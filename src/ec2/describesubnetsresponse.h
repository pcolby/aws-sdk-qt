// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBNETSRESPONSE_H
#define QTAWS_DESCRIBESUBNETSRESPONSE_H

#include "ec2response.h"
#include "describesubnetsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSubnetsResponsePrivate;

class QTAWSEC2_EXPORT DescribeSubnetsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeSubnetsResponse(const DescribeSubnetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSubnetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSubnetsResponse)
    Q_DISABLE_COPY(DescribeSubnetsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
