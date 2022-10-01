// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIAMINSTANCEPROFILEASSOCIATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEIAMINSTANCEPROFILEASSOCIATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeIamInstanceProfileAssociationsResponse;

class DescribeIamInstanceProfileAssociationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeIamInstanceProfileAssociationsResponsePrivate(DescribeIamInstanceProfileAssociationsResponse * const q);

    void parseDescribeIamInstanceProfileAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIamInstanceProfileAssociationsResponse)
    Q_DISABLE_COPY(DescribeIamInstanceProfileAssociationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
