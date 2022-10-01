// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSSENDMESSAGEBATCHRESPONSE_P_H
#define SQSSENDMESSAGEBATCHRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsSendMessageBatchResponse;

class SqsSendMessageBatchResponsePrivate : public SqsResponsePrivate {

public:
    SqsSendMessageBatchResponsePrivate(SqsSendMessageBatchResponse * const q);

    void parseSendMessageBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsSendMessageBatchResponse)
    Q_DISABLE_COPY(SqsSendMessageBatchResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
