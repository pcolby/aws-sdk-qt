// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESHARDCOUNTRESPONSE_P_H
#define QTAWS_UPDATESHARDCOUNTRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class UpdateShardCountResponse;

class UpdateShardCountResponsePrivate : public KinesisResponsePrivate {

public:

    explicit UpdateShardCountResponsePrivate(UpdateShardCountResponse * const q);

    void parseUpdateShardCountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateShardCountResponse)
    Q_DISABLE_COPY(UpdateShardCountResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
