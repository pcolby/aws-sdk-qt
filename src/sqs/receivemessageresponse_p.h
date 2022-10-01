// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECEIVEMESSAGERESPONSE_P_H
#define QTAWS_RECEIVEMESSAGERESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace Sqs {

class ReceiveMessageResponse;

class ReceiveMessageResponsePrivate : public SqsResponsePrivate {

public:

    explicit ReceiveMessageResponsePrivate(ReceiveMessageResponse * const q);

    void parseReceiveMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReceiveMessageResponse)
    Q_DISABLE_COPY(ReceiveMessageResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
