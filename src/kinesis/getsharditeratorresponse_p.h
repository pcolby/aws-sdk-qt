// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSHARDITERATORRESPONSE_P_H
#define QTAWS_GETSHARDITERATORRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class GetShardIteratorResponse;

class GetShardIteratorResponsePrivate : public KinesisResponsePrivate {

public:

    explicit GetShardIteratorResponsePrivate(GetShardIteratorResponse * const q);

    void parseGetShardIteratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetShardIteratorResponse)
    Q_DISABLE_COPY(GetShardIteratorResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
