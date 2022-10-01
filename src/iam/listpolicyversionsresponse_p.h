// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYVERSIONSRESPONSE_P_H
#define QTAWS_LISTPOLICYVERSIONSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListPolicyVersionsResponse;

class ListPolicyVersionsResponsePrivate : public IamResponsePrivate {

public:

    explicit ListPolicyVersionsResponsePrivate(ListPolicyVersionsResponse * const q);

    void parseListPolicyVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPolicyVersionsResponse)
    Q_DISABLE_COPY(ListPolicyVersionsResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
