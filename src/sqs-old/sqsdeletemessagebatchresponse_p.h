// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSDELETEMESSAGEBATCHRESPONSE_P_H
#define SQSDELETEMESSAGEBATCHRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsDeleteMessageBatchResponse;

class SqsDeleteMessageBatchResponsePrivate : public SqsResponsePrivate {

public:
    SqsDeleteMessageBatchResponsePrivate(SqsDeleteMessageBatchResponse * const q);

    void parseDeleteMessageBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsDeleteMessageBatchResponse)
    Q_DISABLE_COPY(SqsDeleteMessageBatchResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
