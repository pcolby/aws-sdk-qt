// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTCHANNELSRESPONSE_P_H
#define QTAWS_LISTCONTACTCHANNELSRESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class ListContactChannelsResponse;

class ListContactChannelsResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit ListContactChannelsResponsePrivate(ListContactChannelsResponse * const q);

    void parseListContactChannelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListContactChannelsResponse)
    Q_DISABLE_COPY(ListContactChannelsResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
