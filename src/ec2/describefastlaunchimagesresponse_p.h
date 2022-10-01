// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFASTLAUNCHIMAGESRESPONSE_P_H
#define QTAWS_DESCRIBEFASTLAUNCHIMAGESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeFastLaunchImagesResponse;

class DescribeFastLaunchImagesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeFastLaunchImagesResponsePrivate(DescribeFastLaunchImagesResponse * const q);

    void parseDescribeFastLaunchImagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFastLaunchImagesResponse)
    Q_DISABLE_COPY(DescribeFastLaunchImagesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
