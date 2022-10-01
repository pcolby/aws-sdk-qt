// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOURCESHAREPERMISSIONRESPONSE_P_H
#define QTAWS_ASSOCIATERESOURCESHAREPERMISSIONRESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class AssociateResourceSharePermissionResponse;

class AssociateResourceSharePermissionResponsePrivate : public RamResponsePrivate {

public:

    explicit AssociateResourceSharePermissionResponsePrivate(AssociateResourceSharePermissionResponse * const q);

    void parseAssociateResourceSharePermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateResourceSharePermissionResponse)
    Q_DISABLE_COPY(AssociateResourceSharePermissionResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
