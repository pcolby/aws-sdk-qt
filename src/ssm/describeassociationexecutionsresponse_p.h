// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSOCIATIONEXECUTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEASSOCIATIONEXECUTIONSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeAssociationExecutionsResponse;

class DescribeAssociationExecutionsResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeAssociationExecutionsResponsePrivate(DescribeAssociationExecutionsResponse * const q);

    void parseDescribeAssociationExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAssociationExecutionsResponse)
    Q_DISABLE_COPY(DescribeAssociationExecutionsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
