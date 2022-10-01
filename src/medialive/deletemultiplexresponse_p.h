// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMULTIPLEXRESPONSE_P_H
#define QTAWS_DELETEMULTIPLEXRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class DeleteMultiplexResponse;

class DeleteMultiplexResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit DeleteMultiplexResponsePrivate(DeleteMultiplexResponse * const q);

    void parseDeleteMultiplexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMultiplexResponse)
    Q_DISABLE_COPY(DeleteMultiplexResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
