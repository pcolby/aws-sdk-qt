// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTHENTICATIONPROFILERESPONSE_P_H
#define QTAWS_CREATEAUTHENTICATIONPROFILERESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class CreateAuthenticationProfileResponse;

class CreateAuthenticationProfileResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit CreateAuthenticationProfileResponsePrivate(CreateAuthenticationProfileResponse * const q);

    void parseCreateAuthenticationProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAuthenticationProfileResponse)
    Q_DISABLE_COPY(CreateAuthenticationProfileResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
