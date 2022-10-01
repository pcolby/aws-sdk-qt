// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTUDIOLIFECYCLECONFIGRESPONSE_P_H
#define QTAWS_DESCRIBESTUDIOLIFECYCLECONFIGRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeStudioLifecycleConfigResponse;

class DescribeStudioLifecycleConfigResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeStudioLifecycleConfigResponsePrivate(DescribeStudioLifecycleConfigResponse * const q);

    void parseDescribeStudioLifecycleConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStudioLifecycleConfigResponse)
    Q_DISABLE_COPY(DescribeStudioLifecycleConfigResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
