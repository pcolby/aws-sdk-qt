// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSOCIATIONRESPONSE_P_H
#define QTAWS_DESCRIBEASSOCIATIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeAssociationResponse;

class DescribeAssociationResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeAssociationResponsePrivate(DescribeAssociationResponse * const q);

    void parseDescribeAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAssociationResponse)
    Q_DISABLE_COPY(DescribeAssociationResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
