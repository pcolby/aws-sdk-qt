// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDROLEPOLICIESRESPONSE_P_H
#define QTAWS_LISTATTACHEDROLEPOLICIESRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListAttachedRolePoliciesResponse;

class ListAttachedRolePoliciesResponsePrivate : public IamResponsePrivate {

public:

    explicit ListAttachedRolePoliciesResponsePrivate(ListAttachedRolePoliciesResponse * const q);

    void parseListAttachedRolePoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAttachedRolePoliciesResponse)
    Q_DISABLE_COPY(ListAttachedRolePoliciesResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
