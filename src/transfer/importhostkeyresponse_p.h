// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTHOSTKEYRESPONSE_P_H
#define QTAWS_IMPORTHOSTKEYRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class ImportHostKeyResponse;

class ImportHostKeyResponsePrivate : public TransferResponsePrivate {

public:

    explicit ImportHostKeyResponsePrivate(ImportHostKeyResponse * const q);

    void parseImportHostKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportHostKeyResponse)
    Q_DISABLE_COPY(ImportHostKeyResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
