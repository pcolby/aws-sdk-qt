// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMSTREAMRESPONSE_P_H
#define QTAWS_REMOVETAGSFROMSTREAMRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class RemoveTagsFromStreamResponse;

class RemoveTagsFromStreamResponsePrivate : public KinesisResponsePrivate {

public:

    explicit RemoveTagsFromStreamResponsePrivate(RemoveTagsFromStreamResponse * const q);

    void parseRemoveTagsFromStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveTagsFromStreamResponse)
    Q_DISABLE_COPY(RemoveTagsFromStreamResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
