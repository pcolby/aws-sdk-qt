// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALIASRESPONSE_P_H
#define QTAWS_DESCRIBEALIASRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeAliasResponse;

class DescribeAliasResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeAliasResponsePrivate(DescribeAliasResponse * const q);

    void parseDescribeAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAliasResponse)
    Q_DISABLE_COPY(DescribeAliasResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
