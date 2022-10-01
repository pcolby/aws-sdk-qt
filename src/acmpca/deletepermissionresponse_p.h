// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONRESPONSE_P_H
#define QTAWS_DELETEPERMISSIONRESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class DeletePermissionResponse;

class DeletePermissionResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit DeletePermissionResponsePrivate(DeletePermissionResponse * const q);

    void parseDeletePermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePermissionResponse)
    Q_DISABLE_COPY(DeletePermissionResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
