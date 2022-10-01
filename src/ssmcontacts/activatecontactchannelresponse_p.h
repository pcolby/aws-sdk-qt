// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATECONTACTCHANNELRESPONSE_P_H
#define QTAWS_ACTIVATECONTACTCHANNELRESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class ActivateContactChannelResponse;

class ActivateContactChannelResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit ActivateContactChannelResponsePrivate(ActivateContactChannelResponse * const q);

    void parseActivateContactChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ActivateContactChannelResponse)
    Q_DISABLE_COPY(ActivateContactChannelResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
