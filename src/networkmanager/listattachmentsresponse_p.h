// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHMENTSRESPONSE_P_H
#define QTAWS_LISTATTACHMENTSRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class ListAttachmentsResponse;

class ListAttachmentsResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit ListAttachmentsResponsePrivate(ListAttachmentsResponse * const q);

    void parseListAttachmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAttachmentsResponse)
    Q_DISABLE_COPY(ListAttachmentsResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
