// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRECORDBATCHRESPONSE_P_H
#define QTAWS_PUTRECORDBATCHRESPONSE_P_H

#include "firehoseresponse_p.h"

namespace QtAws {
namespace Firehose {

class PutRecordBatchResponse;

class PutRecordBatchResponsePrivate : public FirehoseResponsePrivate {

public:

    explicit PutRecordBatchResponsePrivate(PutRecordBatchResponse * const q);

    void parsePutRecordBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRecordBatchResponse)
    Q_DISABLE_COPY(PutRecordBatchResponsePrivate)

};

} // namespace Firehose
} // namespace QtAws

#endif
