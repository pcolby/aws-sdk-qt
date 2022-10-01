// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESERVICEROLETOACCOUNTRESPONSE_P_H
#define QTAWS_ASSOCIATESERVICEROLETOACCOUNTRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class AssociateServiceRoleToAccountResponse;

class AssociateServiceRoleToAccountResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit AssociateServiceRoleToAccountResponsePrivate(AssociateServiceRoleToAccountResponse * const q);

    void parseAssociateServiceRoleToAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateServiceRoleToAccountResponse)
    Q_DISABLE_COPY(AssociateServiceRoleToAccountResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
