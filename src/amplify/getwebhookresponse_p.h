// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWEBHOOKRESPONSE_P_H
#define QTAWS_GETWEBHOOKRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class GetWebhookResponse;

class GetWebhookResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit GetWebhookResponsePrivate(GetWebhookResponse * const q);

    void parseGetWebhookResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWebhookResponse)
    Q_DISABLE_COPY(GetWebhookResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
