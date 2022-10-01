// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYIDFORMATRESPONSE_H
#define QTAWS_DESCRIBEIDENTITYIDFORMATRESPONSE_H

#include "ec2response.h"
#include "describeidentityidformatrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeIdentityIdFormatResponsePrivate;

class QTAWSEC2_EXPORT DescribeIdentityIdFormatResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeIdentityIdFormatResponse(const DescribeIdentityIdFormatRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIdentityIdFormatRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIdentityIdFormatResponse)
    Q_DISABLE_COPY(DescribeIdentityIdFormatResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
