// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHARDSRESPONSE_P_H
#define QTAWS_LISTSHARDSRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class ListShardsResponse;

class ListShardsResponsePrivate : public KinesisResponsePrivate {

public:

    explicit ListShardsResponsePrivate(ListShardsResponse * const q);

    void parseListShardsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListShardsResponse)
    Q_DISABLE_COPY(ListShardsResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
