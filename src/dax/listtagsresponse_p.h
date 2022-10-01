// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSRESPONSE_P_H
#define QTAWS_LISTTAGSRESPONSE_P_H

#include "daxresponse_p.h"

namespace QtAws {
namespace Dax {

class ListTagsResponse;

class ListTagsResponsePrivate : public DaxResponsePrivate {

public:

    explicit ListTagsResponsePrivate(ListTagsResponse * const q);

    void parseListTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTagsResponse)
    Q_DISABLE_COPY(ListTagsResponsePrivate)

};

} // namespace Dax
} // namespace QtAws

#endif
