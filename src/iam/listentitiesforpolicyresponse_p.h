// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITIESFORPOLICYRESPONSE_P_H
#define QTAWS_LISTENTITIESFORPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListEntitiesForPolicyResponse;

class ListEntitiesForPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit ListEntitiesForPolicyResponsePrivate(ListEntitiesForPolicyResponse * const q);

    void parseListEntitiesForPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEntitiesForPolicyResponse)
    Q_DISABLE_COPY(ListEntitiesForPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
