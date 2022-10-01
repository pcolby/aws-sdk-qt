// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOURNALKINESISSTREAMRESPONSE_H
#define QTAWS_DESCRIBEJOURNALKINESISSTREAMRESPONSE_H

#include "qldbresponse.h"
#include "describejournalkinesisstreamrequest.h"

namespace QtAws {
namespace Qldb {

class DescribeJournalKinesisStreamResponsePrivate;

class QTAWSQLDB_EXPORT DescribeJournalKinesisStreamResponse : public QldbResponse {
    Q_OBJECT

public:
    DescribeJournalKinesisStreamResponse(const DescribeJournalKinesisStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeJournalKinesisStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJournalKinesisStreamResponse)
    Q_DISABLE_COPY(DescribeJournalKinesisStreamResponse)

};

} // namespace Qldb
} // namespace QtAws

#endif
