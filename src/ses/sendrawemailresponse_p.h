// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDRAWEMAILRESPONSE_P_H
#define QTAWS_SENDRAWEMAILRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class SendRawEmailResponse;

class SendRawEmailResponsePrivate : public SesResponsePrivate {

public:

    explicit SendRawEmailResponsePrivate(SendRawEmailResponse * const q);

    void parseSendRawEmailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendRawEmailResponse)
    Q_DISABLE_COPY(SendRawEmailResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
