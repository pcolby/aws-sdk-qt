// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAUNCHTEMPLATESRESPONSE_P_H
#define QTAWS_DESCRIBELAUNCHTEMPLATESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeLaunchTemplatesResponse;

class DescribeLaunchTemplatesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeLaunchTemplatesResponsePrivate(DescribeLaunchTemplatesResponse * const q);

    void parseDescribeLaunchTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLaunchTemplatesResponse)
    Q_DISABLE_COPY(DescribeLaunchTemplatesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
