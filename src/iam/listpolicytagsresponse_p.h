// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYTAGSRESPONSE_P_H
#define QTAWS_LISTPOLICYTAGSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListPolicyTagsResponse;

class ListPolicyTagsResponsePrivate : public IamResponsePrivate {

public:

    explicit ListPolicyTagsResponsePrivate(ListPolicyTagsResponse * const q);

    void parseListPolicyTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPolicyTagsResponse)
    Q_DISABLE_COPY(ListPolicyTagsResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
