// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTIPLEXRESPONSE_P_H
#define QTAWS_CREATEMULTIPLEXRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class CreateMultiplexResponse;

class CreateMultiplexResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit CreateMultiplexResponsePrivate(CreateMultiplexResponse * const q);

    void parseCreateMultiplexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMultiplexResponse)
    Q_DISABLE_COPY(CreateMultiplexResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
