// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTACHMENTRESPONSE_P_H
#define QTAWS_DELETEATTACHMENTRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class DeleteAttachmentResponse;

class DeleteAttachmentResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit DeleteAttachmentResponsePrivate(DeleteAttachmentResponse * const q);

    void parseDeleteAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAttachmentResponse)
    Q_DISABLE_COPY(DeleteAttachmentResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
