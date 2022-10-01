// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDOCUMENTPERMISSIONRESPONSE_P_H
#define QTAWS_MODIFYDOCUMENTPERMISSIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ModifyDocumentPermissionResponse;

class ModifyDocumentPermissionResponsePrivate : public SsmResponsePrivate {

public:

    explicit ModifyDocumentPermissionResponsePrivate(ModifyDocumentPermissionResponse * const q);

    void parseModifyDocumentPermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyDocumentPermissionResponse)
    Q_DISABLE_COPY(ModifyDocumentPermissionResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
