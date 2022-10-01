// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPERMISSIONRESPONSE_P_H
#define QTAWS_CREATEPERMISSIONRESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class CreatePermissionResponse;

class CreatePermissionResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit CreatePermissionResponsePrivate(CreatePermissionResponse * const q);

    void parseCreatePermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePermissionResponse)
    Q_DISABLE_COPY(CreatePermissionResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
