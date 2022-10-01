// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINLINEPOLICYTOPERMISSIONSETRESPONSE_P_H
#define QTAWS_PUTINLINEPOLICYTOPERMISSIONSETRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class PutInlinePolicyToPermissionSetResponse;

class PutInlinePolicyToPermissionSetResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit PutInlinePolicyToPermissionSetResponsePrivate(PutInlinePolicyToPermissionSetResponse * const q);

    void parsePutInlinePolicyToPermissionSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutInlinePolicyToPermissionSetResponse)
    Q_DISABLE_COPY(PutInlinePolicyToPermissionSetResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
