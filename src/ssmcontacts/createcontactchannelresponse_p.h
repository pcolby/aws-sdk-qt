// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTCHANNELRESPONSE_P_H
#define QTAWS_CREATECONTACTCHANNELRESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class CreateContactChannelResponse;

class CreateContactChannelResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit CreateContactChannelResponsePrivate(CreateContactChannelResponse * const q);

    void parseCreateContactChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateContactChannelResponse)
    Q_DISABLE_COPY(CreateContactChannelResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
