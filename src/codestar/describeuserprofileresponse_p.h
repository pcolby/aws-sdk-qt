// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPROFILERESPONSE_P_H
#define QTAWS_DESCRIBEUSERPROFILERESPONSE_P_H

#include "codestarresponse_p.h"

namespace QtAws {
namespace CodeStar {

class DescribeUserProfileResponse;

class DescribeUserProfileResponsePrivate : public CodeStarResponsePrivate {

public:

    explicit DescribeUserProfileResponsePrivate(DescribeUserProfileResponse * const q);

    void parseDescribeUserProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUserProfileResponse)
    Q_DISABLE_COPY(DescribeUserProfileResponsePrivate)

};

} // namespace CodeStar
} // namespace QtAws

#endif
