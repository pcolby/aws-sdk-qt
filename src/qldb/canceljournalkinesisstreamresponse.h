// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOURNALKINESISSTREAMRESPONSE_H
#define QTAWS_CANCELJOURNALKINESISSTREAMRESPONSE_H

#include "qldbresponse.h"
#include "canceljournalkinesisstreamrequest.h"

namespace QtAws {
namespace Qldb {

class CancelJournalKinesisStreamResponsePrivate;

class QTAWSQLDB_EXPORT CancelJournalKinesisStreamResponse : public QldbResponse {
    Q_OBJECT

public:
    CancelJournalKinesisStreamResponse(const CancelJournalKinesisStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelJournalKinesisStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelJournalKinesisStreamResponse)
    Q_DISABLE_COPY(CancelJournalKinesisStreamResponse)

};

} // namespace Qldb
} // namespace QtAws

#endif
