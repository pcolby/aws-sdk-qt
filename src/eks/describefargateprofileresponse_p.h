// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFARGATEPROFILERESPONSE_P_H
#define QTAWS_DESCRIBEFARGATEPROFILERESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class DescribeFargateProfileResponse;

class DescribeFargateProfileResponsePrivate : public EksResponsePrivate {

public:

    explicit DescribeFargateProfileResponsePrivate(DescribeFargateProfileResponse * const q);

    void parseDescribeFargateProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFargateProfileResponse)
    Q_DISABLE_COPY(DescribeFargateProfileResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
