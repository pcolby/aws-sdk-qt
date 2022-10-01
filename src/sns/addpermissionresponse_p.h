// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPERMISSIONRESPONSE_P_H
#define QTAWS_ADDPERMISSIONRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class AddPermissionResponse;

class AddPermissionResponsePrivate : public SnsResponsePrivate {

public:

    explicit AddPermissionResponsePrivate(AddPermissionResponse * const q);

    void parseAddPermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddPermissionResponse)
    Q_DISABLE_COPY(AddPermissionResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
