// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDGROUPPOLICIESRESPONSE_P_H
#define QTAWS_LISTATTACHEDGROUPPOLICIESRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListAttachedGroupPoliciesResponse;

class ListAttachedGroupPoliciesResponsePrivate : public IamResponsePrivate {

public:

    explicit ListAttachedGroupPoliciesResponsePrivate(ListAttachedGroupPoliciesResponse * const q);

    void parseListAttachedGroupPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAttachedGroupPoliciesResponse)
    Q_DISABLE_COPY(ListAttachedGroupPoliciesResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
