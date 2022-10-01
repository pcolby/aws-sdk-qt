// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMSRESPONSE_P_H
#define QTAWS_LISTSTREAMSRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class ListStreamsResponse;

class ListStreamsResponsePrivate : public KinesisResponsePrivate {

public:

    explicit ListStreamsResponsePrivate(ListStreamsResponse * const q);

    void parseListStreamsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStreamsResponse)
    Q_DISABLE_COPY(ListStreamsResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
