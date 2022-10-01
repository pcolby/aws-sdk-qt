// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEADMINACCOUNTRESPONSE_P_H
#define QTAWS_ASSOCIATEADMINACCOUNTRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class AssociateAdminAccountResponse;

class AssociateAdminAccountResponsePrivate : public FmsResponsePrivate {

public:

    explicit AssociateAdminAccountResponsePrivate(AssociateAdminAccountResponse * const q);

    void parseAssociateAdminAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateAdminAccountResponse)
    Q_DISABLE_COPY(AssociateAdminAccountResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
