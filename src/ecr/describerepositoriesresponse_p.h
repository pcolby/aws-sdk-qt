// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPOSITORIESRESPONSE_P_H
#define QTAWS_DESCRIBEREPOSITORIESRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class DescribeRepositoriesResponse;

class DescribeRepositoriesResponsePrivate : public EcrResponsePrivate {

public:

    explicit DescribeRepositoriesResponsePrivate(DescribeRepositoriesResponse * const q);

    void parseDescribeRepositoriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRepositoriesResponse)
    Q_DISABLE_COPY(DescribeRepositoriesResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
