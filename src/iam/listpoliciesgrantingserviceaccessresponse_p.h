// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICIESGRANTINGSERVICEACCESSRESPONSE_P_H
#define QTAWS_LISTPOLICIESGRANTINGSERVICEACCESSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListPoliciesGrantingServiceAccessResponse;

class ListPoliciesGrantingServiceAccessResponsePrivate : public IamResponsePrivate {

public:

    explicit ListPoliciesGrantingServiceAccessResponsePrivate(ListPoliciesGrantingServiceAccessResponse * const q);

    void parseListPoliciesGrantingServiceAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPoliciesGrantingServiceAccessResponse)
    Q_DISABLE_COPY(ListPoliciesGrantingServiceAccessResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
