// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETPERMISSIONRESPONSE_P_H
#define QTAWS_SETPERMISSIONRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class SetPermissionResponse;

class SetPermissionResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit SetPermissionResponsePrivate(SetPermissionResponse * const q);

    void parseSetPermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetPermissionResponse)
    Q_DISABLE_COPY(SetPermissionResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
