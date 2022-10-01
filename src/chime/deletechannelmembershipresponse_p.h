// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMEMBERSHIPRESPONSE_P_H
#define QTAWS_DELETECHANNELMEMBERSHIPRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteChannelMembershipResponse;

class DeleteChannelMembershipResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteChannelMembershipResponsePrivate(DeleteChannelMembershipResponse * const q);

    void parseDeleteChannelMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteChannelMembershipResponse)
    Q_DISABLE_COPY(DeleteChannelMembershipResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
