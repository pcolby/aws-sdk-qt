// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATECONTACTCHANNELRESPONSE_P_H
#define QTAWS_DEACTIVATECONTACTCHANNELRESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class DeactivateContactChannelResponse;

class DeactivateContactChannelResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit DeactivateContactChannelResponsePrivate(DeactivateContactChannelResponse * const q);

    void parseDeactivateContactChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeactivateContactChannelResponse)
    Q_DISABLE_COPY(DeactivateContactChannelResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
