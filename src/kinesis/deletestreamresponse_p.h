// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMRESPONSE_P_H
#define QTAWS_DELETESTREAMRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class DeleteStreamResponse;

class DeleteStreamResponsePrivate : public KinesisResponsePrivate {

public:

    explicit DeleteStreamResponsePrivate(DeleteStreamResponse * const q);

    void parseDeleteStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStreamResponse)
    Q_DISABLE_COPY(DeleteStreamResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
