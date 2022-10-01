// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBETOSHARDRESPONSE_P_H
#define QTAWS_SUBSCRIBETOSHARDRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class SubscribeToShardResponse;

class SubscribeToShardResponsePrivate : public KinesisResponsePrivate {

public:

    explicit SubscribeToShardResponsePrivate(SubscribeToShardResponse * const q);

    void parseSubscribeToShardResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SubscribeToShardResponse)
    Q_DISABLE_COPY(SubscribeToShardResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
