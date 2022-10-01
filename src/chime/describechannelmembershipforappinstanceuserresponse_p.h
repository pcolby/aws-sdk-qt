// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMEMBERSHIPFORAPPINSTANCEUSERRESPONSE_P_H
#define QTAWS_DESCRIBECHANNELMEMBERSHIPFORAPPINSTANCEUSERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DescribeChannelMembershipForAppInstanceUserResponse;

class DescribeChannelMembershipForAppInstanceUserResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DescribeChannelMembershipForAppInstanceUserResponsePrivate(DescribeChannelMembershipForAppInstanceUserResponse * const q);

    void parseDescribeChannelMembershipForAppInstanceUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeChannelMembershipForAppInstanceUserResponse)
    Q_DISABLE_COPY(DescribeChannelMembershipForAppInstanceUserResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
