// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINLINEPOLICYFROMPERMISSIONSETRESPONSE_P_H
#define QTAWS_DELETEINLINEPOLICYFROMPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class DeleteInlinePolicyFromPermissionSetResponse;

class DeleteInlinePolicyFromPermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit DeleteInlinePolicyFromPermissionSetResponsePrivate(DeleteInlinePolicyFromPermissionSetResponse * const q);

    void parseDeleteInlinePolicyFromPermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInlinePolicyFromPermissionSetResponse)
    Q_DISABLE_COPY(DeleteInlinePolicyFromPermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
