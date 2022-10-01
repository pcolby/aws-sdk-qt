// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOURNALKINESISSTREAMRESPONSE_P_H
#define QTAWS_DESCRIBEJOURNALKINESISSTREAMRESPONSE_P_H

#include "qldbresponse_p.h"

namespace QtAws {
namespace Qldb {

class DescribeJournalKinesisStreamResponse;

class DescribeJournalKinesisStreamResponsePrivate : public QldbResponsePrivate {

public:

    explicit DescribeJournalKinesisStreamResponsePrivate(DescribeJournalKinesisStreamResponse * const q);

    void parseDescribeJournalKinesisStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeJournalKinesisStreamResponse)
    Q_DISABLE_COPY(DescribeJournalKinesisStreamResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
