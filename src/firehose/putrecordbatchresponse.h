// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECORDBATCHRESPONSE_H
#define QTAWS_PUTRECORDBATCHRESPONSE_H

#include "firehoseresponse.h"
#include "putrecordbatchrequest.h"

namespace QtAws {
namespace Firehose {

class PutRecordBatchResponsePrivate;

class QTAWSFIREHOSE_EXPORT PutRecordBatchResponse : public FirehoseResponse {
    Q_OBJECT

public:
    PutRecordBatchResponse(const PutRecordBatchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRecordBatchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRecordBatchResponse)
    Q_DISABLE_COPY(PutRecordBatchResponse)

};

} // namespace Firehose
} // namespace QtAws

#endif
