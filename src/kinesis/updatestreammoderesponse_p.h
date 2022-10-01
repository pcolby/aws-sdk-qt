// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMMODERESPONSE_P_H
#define QTAWS_UPDATESTREAMMODERESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class UpdateStreamModeResponse;

class UpdateStreamModeResponsePrivate : public KinesisResponsePrivate {

public:

    explicit UpdateStreamModeResponsePrivate(UpdateStreamModeResponse * const q);

    void parseUpdateStreamModeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStreamModeResponse)
    Q_DISABLE_COPY(UpdateStreamModeResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
