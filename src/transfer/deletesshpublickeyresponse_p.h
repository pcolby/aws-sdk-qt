// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESSHPUBLICKEYRESPONSE_P_H
#define QTAWS_DELETESSHPUBLICKEYRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class DeleteSshPublicKeyResponse;

class DeleteSshPublicKeyResponsePrivate : public TransferResponsePrivate {

public:

    explicit DeleteSshPublicKeyResponsePrivate(DeleteSshPublicKeyResponse * const q);

    void parseDeleteSshPublicKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSshPublicKeyResponse)
    Q_DISABLE_COPY(DeleteSshPublicKeyResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
