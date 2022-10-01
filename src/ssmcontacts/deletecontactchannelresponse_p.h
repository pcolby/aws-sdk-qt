// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTCHANNELRESPONSE_P_H
#define QTAWS_DELETECONTACTCHANNELRESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class DeleteContactChannelResponse;

class DeleteContactChannelResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit DeleteContactChannelResponsePrivate(DeleteContactChannelResponse * const q);

    void parseDeleteContactChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteContactChannelResponse)
    Q_DISABLE_COPY(DeleteContactChannelResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
