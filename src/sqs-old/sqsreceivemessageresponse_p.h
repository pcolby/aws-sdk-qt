// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSRECEIVEMESSAGERESPONSE_P_H
#define SQSRECEIVEMESSAGERESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsReceiveMessageResponse;

class SqsReceiveMessageResponsePrivate : public SqsResponsePrivate {

public:
    SqsReceiveMessageResponsePrivate(SqsReceiveMessageResponse * const q);

    void parseReceiveMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsReceiveMessageResponse)
    Q_DISABLE_COPY(SqsReceiveMessageResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
