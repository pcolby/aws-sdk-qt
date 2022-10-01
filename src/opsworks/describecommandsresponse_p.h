// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMMANDSRESPONSE_P_H
#define QTAWS_DESCRIBECOMMANDSRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeCommandsResponse;

class DescribeCommandsResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeCommandsResponsePrivate(DescribeCommandsResponse * const q);

    void parseDescribeCommandsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCommandsResponse)
    Q_DISABLE_COPY(DescribeCommandsResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
