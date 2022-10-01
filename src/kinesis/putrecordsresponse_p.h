// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECORDSRESPONSE_P_H
#define QTAWS_PUTRECORDSRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class PutRecordsResponse;

class PutRecordsResponsePrivate : public KinesisResponsePrivate {

public:

    explicit PutRecordsResponsePrivate(PutRecordsResponse * const q);

    void parsePutRecordsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRecordsResponse)
    Q_DISABLE_COPY(PutRecordsResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
