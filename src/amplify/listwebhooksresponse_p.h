// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWEBHOOKSRESPONSE_P_H
#define QTAWS_LISTWEBHOOKSRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class ListWebhooksResponse;

class ListWebhooksResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit ListWebhooksResponsePrivate(ListWebhooksResponse * const q);

    void parseListWebhooksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWebhooksResponse)
    Q_DISABLE_COPY(ListWebhooksResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
