// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSSENDMESSAGERESPONSE_P_H
#define SQSSENDMESSAGERESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsSendMessageResponse;

class SqsSendMessageResponsePrivate : public SqsResponsePrivate {

public:
    SqsSendMessageResponsePrivate(SqsSendMessageResponse * const q);

    void parseSendMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsSendMessageResponse)
    Q_DISABLE_COPY(SqsSendMessageResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
