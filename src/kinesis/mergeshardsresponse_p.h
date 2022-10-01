// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGESHARDSRESPONSE_P_H
#define QTAWS_MERGESHARDSRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class MergeShardsResponse;

class MergeShardsResponsePrivate : public KinesisResponsePrivate {

public:

    explicit MergeShardsResponsePrivate(MergeShardsResponse * const q);

    void parseMergeShardsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MergeShardsResponse)
    Q_DISABLE_COPY(MergeShardsResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
