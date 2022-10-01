// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBSCRIBEDWORKTEAMRESPONSE_P_H
#define QTAWS_DESCRIBESUBSCRIBEDWORKTEAMRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeSubscribedWorkteamResponse;

class DescribeSubscribedWorkteamResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeSubscribedWorkteamResponsePrivate(DescribeSubscribedWorkteamResponse * const q);

    void parseDescribeSubscribedWorkteamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSubscribedWorkteamResponse)
    Q_DISABLE_COPY(DescribeSubscribedWorkteamResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
