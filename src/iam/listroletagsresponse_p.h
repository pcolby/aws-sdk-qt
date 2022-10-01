// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROLETAGSRESPONSE_P_H
#define QTAWS_LISTROLETAGSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListRoleTagsResponse;

class ListRoleTagsResponsePrivate : public IamResponsePrivate {

public:

    explicit ListRoleTagsResponsePrivate(ListRoleTagsResponse * const q);

    void parseListRoleTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRoleTagsResponse)
    Q_DISABLE_COPY(ListRoleTagsResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
