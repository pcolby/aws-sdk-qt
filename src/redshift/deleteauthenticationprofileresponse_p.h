// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTHENTICATIONPROFILERESPONSE_P_H
#define QTAWS_DELETEAUTHENTICATIONPROFILERESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DeleteAuthenticationProfileResponse;

class DeleteAuthenticationProfileResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DeleteAuthenticationProfileResponsePrivate(DeleteAuthenticationProfileResponse * const q);

    void parseDeleteAuthenticationProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAuthenticationProfileResponse)
    Q_DISABLE_COPY(DeleteAuthenticationProfileResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
