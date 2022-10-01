// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBYOIPCIDRSRESPONSE_H
#define QTAWS_DESCRIBEBYOIPCIDRSRESPONSE_H

#include "ec2response.h"
#include "describebyoipcidrsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeByoipCidrsResponsePrivate;

class QTAWSEC2_EXPORT DescribeByoipCidrsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeByoipCidrsResponse(const DescribeByoipCidrsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeByoipCidrsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeByoipCidrsResponse)
    Q_DISABLE_COPY(DescribeByoipCidrsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
