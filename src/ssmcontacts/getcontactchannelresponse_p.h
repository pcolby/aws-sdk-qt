// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTCHANNELRESPONSE_P_H
#define QTAWS_GETCONTACTCHANNELRESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class GetContactChannelResponse;

class GetContactChannelResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit GetContactChannelResponsePrivate(GetContactChannelResponse * const q);

    void parseGetContactChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContactChannelResponse)
    Q_DISABLE_COPY(GetContactChannelResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
