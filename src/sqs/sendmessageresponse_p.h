// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDMESSAGERESPONSE_P_H
#define QTAWS_SENDMESSAGERESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace Sqs {

class SendMessageResponse;

class SendMessageResponsePrivate : public SqsResponsePrivate {

public:

    explicit SendMessageResponsePrivate(SendMessageResponse * const q);

    void parseSendMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendMessageResponse)
    Q_DISABLE_COPY(SendMessageResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
