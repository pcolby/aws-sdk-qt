// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPATCHGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEPATCHGROUPSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribePatchGroupsResponse;

class DescribePatchGroupsResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribePatchGroupsResponsePrivate(DescribePatchGroupsResponse * const q);

    void parseDescribePatchGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePatchGroupsResponse)
    Q_DISABLE_COPY(DescribePatchGroupsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
