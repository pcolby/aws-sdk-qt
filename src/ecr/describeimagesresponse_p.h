// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGESRESPONSE_P_H
#define QTAWS_DESCRIBEIMAGESRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class DescribeImagesResponse;

class DescribeImagesResponsePrivate : public EcrResponsePrivate {

public:

    explicit DescribeImagesResponsePrivate(DescribeImagesResponse * const q);

    void parseDescribeImagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeImagesResponse)
    Q_DISABLE_COPY(DescribeImagesResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
