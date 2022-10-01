// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SPLITSHARDRESPONSE_P_H
#define QTAWS_SPLITSHARDRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class SplitShardResponse;

class SplitShardResponsePrivate : public KinesisResponsePrivate {

public:

    explicit SplitShardResponsePrivate(SplitShardResponse * const q);

    void parseSplitShardResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SplitShardResponse)
    Q_DISABLE_COPY(SplitShardResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
