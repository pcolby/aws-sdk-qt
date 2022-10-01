// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPIMAGECONFIGRESPONSE_P_H
#define QTAWS_DESCRIBEAPPIMAGECONFIGRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeAppImageConfigResponse;

class DescribeAppImageConfigResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeAppImageConfigResponsePrivate(DescribeAppImageConfigResponse * const q);

    void parseDescribeAppImageConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAppImageConfigResponse)
    Q_DISABLE_COPY(DescribeAppImageConfigResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
