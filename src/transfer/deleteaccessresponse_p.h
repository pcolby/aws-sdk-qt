// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSRESPONSE_P_H
#define QTAWS_DELETEACCESSRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class DeleteAccessResponse;

class DeleteAccessResponsePrivate : public TransferResponsePrivate {

public:

    explicit DeleteAccessResponsePrivate(DeleteAccessResponse * const q);

    void parseDeleteAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccessResponse)
    Q_DISABLE_COPY(DeleteAccessResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
