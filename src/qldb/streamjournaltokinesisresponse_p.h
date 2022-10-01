// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STREAMJOURNALTOKINESISRESPONSE_P_H
#define QTAWS_STREAMJOURNALTOKINESISRESPONSE_P_H

#include "qldbresponse_p.h"

namespace QtAws {
namespace Qldb {

class StreamJournalToKinesisResponse;

class StreamJournalToKinesisResponsePrivate : public QldbResponsePrivate {

public:

    explicit StreamJournalToKinesisResponsePrivate(StreamJournalToKinesisResponse * const q);

    void parseStreamJournalToKinesisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StreamJournalToKinesisResponse)
    Q_DISABLE_COPY(StreamJournalToKinesisResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
