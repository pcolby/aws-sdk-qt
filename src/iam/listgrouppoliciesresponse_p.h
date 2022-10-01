// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPPOLICIESRESPONSE_P_H
#define QTAWS_LISTGROUPPOLICIESRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListGroupPoliciesResponse;

class ListGroupPoliciesResponsePrivate : public IamResponsePrivate {

public:

    explicit ListGroupPoliciesResponsePrivate(ListGroupPoliciesResponse * const q);

    void parseListGroupPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGroupPoliciesResponse)
    Q_DISABLE_COPY(ListGroupPoliciesResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
