// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDUSERPOLICIESRESPONSE_P_H
#define QTAWS_LISTATTACHEDUSERPOLICIESRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListAttachedUserPoliciesResponse;

class ListAttachedUserPoliciesResponsePrivate : public IamResponsePrivate {

public:

    explicit ListAttachedUserPoliciesResponsePrivate(ListAttachedUserPoliciesResponse * const q);

    void parseListAttachedUserPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAttachedUserPoliciesResponse)
    Q_DISABLE_COPY(ListAttachedUserPoliciesResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
