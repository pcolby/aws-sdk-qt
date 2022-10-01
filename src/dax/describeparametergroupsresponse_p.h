// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARAMETERGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEPARAMETERGROUPSRESPONSE_P_H

#include "daxresponse_p.h"

namespace QtAws {
namespace Dax {

class DescribeParameterGroupsResponse;

class DescribeParameterGroupsResponsePrivate : public DaxResponsePrivate {

public:

    explicit DescribeParameterGroupsResponsePrivate(DescribeParameterGroupsResponse * const q);

    void parseDescribeParameterGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeParameterGroupsResponse)
    Q_DISABLE_COPY(DescribeParameterGroupsResponsePrivate)

};

} // namespace Dax
} // namespace QtAws

#endif
