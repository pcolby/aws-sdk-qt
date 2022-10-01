// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLACEROOTVOLUMETASKSRESPONSE_P_H
#define QTAWS_DESCRIBEREPLACEROOTVOLUMETASKSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeReplaceRootVolumeTasksResponse;

class DescribeReplaceRootVolumeTasksResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeReplaceRootVolumeTasksResponsePrivate(DescribeReplaceRootVolumeTasksResponse * const q);

    void parseDescribeReplaceRootVolumeTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReplaceRootVolumeTasksResponse)
    Q_DISABLE_COPY(DescribeReplaceRootVolumeTasksResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
