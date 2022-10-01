// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCOMMANDRESPONSE_P_H
#define QTAWS_SENDCOMMANDRESPONSE_P_H

#include "qldbsessionresponse_p.h"

namespace QtAws {
namespace QldbSession {

class SendCommandResponse;

class SendCommandResponsePrivate : public QldbSessionResponsePrivate {

public:

    explicit SendCommandResponsePrivate(SendCommandResponse * const q);

    void parseSendCommandResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendCommandResponse)
    Q_DISABLE_COPY(SendCommandResponsePrivate)

};

} // namespace QldbSession
} // namespace QtAws

#endif
