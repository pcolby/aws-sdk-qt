// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZEDATASHARERESPONSE_P_H
#define QTAWS_AUTHORIZEDATASHARERESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class AuthorizeDataShareResponse;

class AuthorizeDataShareResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit AuthorizeDataShareResponsePrivate(AuthorizeDataShareResponse * const q);

    void parseAuthorizeDataShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AuthorizeDataShareResponse)
    Q_DISABLE_COPY(AuthorizeDataShareResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
