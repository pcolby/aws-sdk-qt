// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELBANRESPONSE_P_H
#define QTAWS_DELETECHANNELBANRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteChannelBanResponse;

class DeleteChannelBanResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteChannelBanResponsePrivate(DeleteChannelBanResponse * const q);

    void parseDeleteChannelBanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteChannelBanResponse)
    Q_DISABLE_COPY(DeleteChannelBanResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
