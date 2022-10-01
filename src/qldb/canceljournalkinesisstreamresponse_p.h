// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOURNALKINESISSTREAMRESPONSE_P_H
#define QTAWS_CANCELJOURNALKINESISSTREAMRESPONSE_P_H

#include "qldbresponse_p.h"

namespace QtAws {
namespace Qldb {

class CancelJournalKinesisStreamResponse;

class CancelJournalKinesisStreamResponsePrivate : public QldbResponsePrivate {

public:

    explicit CancelJournalKinesisStreamResponsePrivate(CancelJournalKinesisStreamResponse * const q);

    void parseCancelJournalKinesisStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelJournalKinesisStreamResponse)
    Q_DISABLE_COPY(CancelJournalKinesisStreamResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
