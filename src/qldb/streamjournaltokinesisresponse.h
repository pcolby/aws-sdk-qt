// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STREAMJOURNALTOKINESISRESPONSE_H
#define QTAWS_STREAMJOURNALTOKINESISRESPONSE_H

#include "qldbresponse.h"
#include "streamjournaltokinesisrequest.h"

namespace QtAws {
namespace Qldb {

class StreamJournalToKinesisResponsePrivate;

class QTAWSQLDB_EXPORT StreamJournalToKinesisResponse : public QldbResponse {
    Q_OBJECT

public:
    StreamJournalToKinesisResponse(const StreamJournalToKinesisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StreamJournalToKinesisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StreamJournalToKinesisResponse)
    Q_DISABLE_COPY(StreamJournalToKinesisResponse)

};

} // namespace Qldb
} // namespace QtAws

#endif
