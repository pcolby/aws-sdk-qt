// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKTEAMRESPONSE_P_H
#define QTAWS_DESCRIBEWORKTEAMRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeWorkteamResponse;

class DescribeWorkteamResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeWorkteamResponsePrivate(DescribeWorkteamResponse * const q);

    void parseDescribeWorkteamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorkteamResponse)
    Q_DISABLE_COPY(DescribeWorkteamResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
