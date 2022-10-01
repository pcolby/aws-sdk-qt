// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELMEMBERSHIPRESPONSE_P_H
#define QTAWS_CREATECHANNELMEMBERSHIPRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateChannelMembershipResponse;

class CreateChannelMembershipResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateChannelMembershipResponsePrivate(CreateChannelMembershipResponse * const q);

    void parseCreateChannelMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateChannelMembershipResponse)
    Q_DISABLE_COPY(CreateChannelMembershipResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
