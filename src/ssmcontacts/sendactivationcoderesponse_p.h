// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDACTIVATIONCODERESPONSE_P_H
#define QTAWS_SENDACTIVATIONCODERESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class SendActivationCodeResponse;

class SendActivationCodeResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit SendActivationCodeResponsePrivate(SendActivationCodeResponse * const q);

    void parseSendActivationCodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendActivationCodeResponse)
    Q_DISABLE_COPY(SendActivationCodeResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
