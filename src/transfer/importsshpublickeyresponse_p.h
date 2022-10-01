// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTSSHPUBLICKEYRESPONSE_P_H
#define QTAWS_IMPORTSSHPUBLICKEYRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class ImportSshPublicKeyResponse;

class ImportSshPublicKeyResponsePrivate : public TransferResponsePrivate {

public:

    explicit ImportSshPublicKeyResponsePrivate(ImportSshPublicKeyResponse * const q);

    void parseImportSshPublicKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportSshPublicKeyResponse)
    Q_DISABLE_COPY(ImportSshPublicKeyResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
