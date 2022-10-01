// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCRIPTRESPONSE_P_H
#define QTAWS_DESCRIBESCRIPTRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeScriptResponse;

class DescribeScriptResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeScriptResponsePrivate(DescribeScriptResponse * const q);

    void parseDescribeScriptResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeScriptResponse)
    Q_DISABLE_COPY(DescribeScriptResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
