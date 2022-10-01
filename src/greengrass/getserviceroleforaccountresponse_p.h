// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEROLEFORACCOUNTRESPONSE_P_H
#define QTAWS_GETSERVICEROLEFORACCOUNTRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetServiceRoleForAccountResponse;

class GetServiceRoleForAccountResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetServiceRoleForAccountResponsePrivate(GetServiceRoleForAccountResponse * const q);

    void parseGetServiceRoleForAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServiceRoleForAccountResponse)
    Q_DISABLE_COPY(GetServiceRoleForAccountResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
