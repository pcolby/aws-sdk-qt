// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYAUTHENTICATIONPROFILERESPONSE_P_H
#define QTAWS_MODIFYAUTHENTICATIONPROFILERESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class ModifyAuthenticationProfileResponse;

class ModifyAuthenticationProfileResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit ModifyAuthenticationProfileResponsePrivate(ModifyAuthenticationProfileResponse * const q);

    void parseModifyAuthenticationProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyAuthenticationProfileResponse)
    Q_DISABLE_COPY(ModifyAuthenticationProfileResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
