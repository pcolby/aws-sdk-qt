// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTEMPLATEDEMAILRESPONSE_P_H
#define QTAWS_SENDTEMPLATEDEMAILRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class SendTemplatedEmailResponse;

class SendTemplatedEmailResponsePrivate : public SesResponsePrivate {

public:

    explicit SendTemplatedEmailResponsePrivate(SendTemplatedEmailResponse * const q);

    void parseSendTemplatedEmailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendTemplatedEmailResponse)
    Q_DISABLE_COPY(SendTemplatedEmailResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
