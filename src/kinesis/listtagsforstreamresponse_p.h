// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORSTREAMRESPONSE_P_H
#define QTAWS_LISTTAGSFORSTREAMRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class ListTagsForStreamResponse;

class ListTagsForStreamResponsePrivate : public KinesisResponsePrivate {

public:

    explicit ListTagsForStreamResponsePrivate(ListTagsForStreamResponse * const q);

    void parseListTagsForStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTagsForStreamResponse)
    Q_DISABLE_COPY(ListTagsForStreamResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
