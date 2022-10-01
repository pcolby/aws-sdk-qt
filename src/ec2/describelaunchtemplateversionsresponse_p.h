// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAUNCHTEMPLATEVERSIONSRESPONSE_P_H
#define QTAWS_DESCRIBELAUNCHTEMPLATEVERSIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeLaunchTemplateVersionsResponse;

class DescribeLaunchTemplateVersionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeLaunchTemplateVersionsResponsePrivate(DescribeLaunchTemplateVersionsResponse * const q);

    void parseDescribeLaunchTemplateVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLaunchTemplateVersionsResponse)
    Q_DISABLE_COPY(DescribeLaunchTemplateVersionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
