// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGISTRYRESPONSE_P_H
#define QTAWS_DESCRIBEREGISTRYRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class DescribeRegistryResponse;

class DescribeRegistryResponsePrivate : public EcrResponsePrivate {

public:

    explicit DescribeRegistryResponsePrivate(DescribeRegistryResponse * const q);

    void parseDescribeRegistryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRegistryResponse)
    Q_DISABLE_COPY(DescribeRegistryResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
