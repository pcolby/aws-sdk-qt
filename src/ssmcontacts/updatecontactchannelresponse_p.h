// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTCHANNELRESPONSE_P_H
#define QTAWS_UPDATECONTACTCHANNELRESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class UpdateContactChannelResponse;

class UpdateContactChannelResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit UpdateContactChannelResponsePrivate(UpdateContactChannelResponse * const q);

    void parseUpdateContactChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContactChannelResponse)
    Q_DISABLE_COPY(UpdateContactChannelResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
