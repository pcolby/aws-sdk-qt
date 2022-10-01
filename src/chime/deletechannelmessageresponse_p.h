// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMESSAGERESPONSE_P_H
#define QTAWS_DELETECHANNELMESSAGERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteChannelMessageResponse;

class DeleteChannelMessageResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteChannelMessageResponsePrivate(DeleteChannelMessageResponse * const q);

    void parseDeleteChannelMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteChannelMessageResponse)
    Q_DISABLE_COPY(DeleteChannelMessageResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
