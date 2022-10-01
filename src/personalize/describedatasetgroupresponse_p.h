// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETGROUPRESPONSE_P_H
#define QTAWS_DESCRIBEDATASETGROUPRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class DescribeDatasetGroupResponse;

class DescribeDatasetGroupResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit DescribeDatasetGroupResponsePrivate(DescribeDatasetGroupResponse * const q);

    void parseDescribeDatasetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDatasetGroupResponse)
    Q_DISABLE_COPY(DescribeDatasetGroupResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
