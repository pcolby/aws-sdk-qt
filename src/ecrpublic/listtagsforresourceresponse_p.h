// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORRESOURCERESPONSE_P_H
#define QTAWS_LISTTAGSFORRESOURCERESPONSE_P_H

#include "ecrpublicresponse_p.h"

namespace QtAws {
namespace EcrPublic {

class ListTagsForResourceResponse;

class ListTagsForResourceResponsePrivate : public EcrPublicResponsePrivate {

public:

    explicit ListTagsForResourceResponsePrivate(ListTagsForResourceResponse * const q);

    void parseListTagsForResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTagsForResourceResponse)
    Q_DISABLE_COPY(ListTagsForResourceResponsePrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
