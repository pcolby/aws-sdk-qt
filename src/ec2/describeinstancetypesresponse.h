// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCETYPESRESPONSE_H
#define QTAWS_DESCRIBEINSTANCETYPESRESPONSE_H

#include "ec2response.h"
#include "describeinstancetypesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceTypesResponsePrivate;

class QTAWSEC2_EXPORT DescribeInstanceTypesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeInstanceTypesResponse(const DescribeInstanceTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstanceTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceTypesResponse)
    Q_DISABLE_COPY(DescribeInstanceTypesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
