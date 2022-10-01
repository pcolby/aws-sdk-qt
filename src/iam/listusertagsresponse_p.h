// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERTAGSRESPONSE_P_H
#define QTAWS_LISTUSERTAGSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListUserTagsResponse;

class ListUserTagsResponsePrivate : public IamResponsePrivate {

public:

    explicit ListUserTagsResponsePrivate(ListUserTagsResponse * const q);

    void parseListUserTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUserTagsResponse)
    Q_DISABLE_COPY(ListUserTagsResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
