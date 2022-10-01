// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROLEPOLICIESRESPONSE_P_H
#define QTAWS_LISTROLEPOLICIESRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListRolePoliciesResponse;

class ListRolePoliciesResponsePrivate : public IamResponsePrivate {

public:

    explicit ListRolePoliciesResponsePrivate(ListRolePoliciesResponse * const q);

    void parseListRolePoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRolePoliciesResponse)
    Q_DISABLE_COPY(ListRolePoliciesResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
