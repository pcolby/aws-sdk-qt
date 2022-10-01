// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESERVICEROLETOACCOUNTRESPONSE_P_H
#define QTAWS_ASSOCIATESERVICEROLETOACCOUNTRESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class AssociateServiceRoleToAccountResponse;

class AssociateServiceRoleToAccountResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit AssociateServiceRoleToAccountResponsePrivate(AssociateServiceRoleToAccountResponse * const q);

    void parseAssociateServiceRoleToAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateServiceRoleToAccountResponse)
    Q_DISABLE_COPY(AssociateServiceRoleToAccountResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
