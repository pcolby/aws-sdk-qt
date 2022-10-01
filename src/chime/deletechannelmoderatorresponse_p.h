// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMODERATORRESPONSE_P_H
#define QTAWS_DELETECHANNELMODERATORRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteChannelModeratorResponse;

class DeleteChannelModeratorResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteChannelModeratorResponsePrivate(DeleteChannelModeratorResponse * const q);

    void parseDeleteChannelModeratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteChannelModeratorResponse)
    Q_DISABLE_COPY(DeleteChannelModeratorResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
