// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELINKRESPONSE_P_H
#define QTAWS_DELETELINKRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class DeleteLinkResponse;

class DeleteLinkResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit DeleteLinkResponsePrivate(DeleteLinkResponse * const q);

    void parseDeleteLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLinkResponse)
    Q_DISABLE_COPY(DeleteLinkResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
