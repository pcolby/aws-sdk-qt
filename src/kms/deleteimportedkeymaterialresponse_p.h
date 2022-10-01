// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMPORTEDKEYMATERIALRESPONSE_P_H
#define QTAWS_DELETEIMPORTEDKEYMATERIALRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class DeleteImportedKeyMaterialResponse;

class DeleteImportedKeyMaterialResponsePrivate : public KmsResponsePrivate {

public:

    explicit DeleteImportedKeyMaterialResponsePrivate(DeleteImportedKeyMaterialResponse * const q);

    void parseDeleteImportedKeyMaterialResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteImportedKeyMaterialResponse)
    Q_DISABLE_COPY(DeleteImportedKeyMaterialResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
