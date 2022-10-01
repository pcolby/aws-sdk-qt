// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESRESPONSE_P_H
#define QTAWS_LISTRESOURCESRESPONSE_P_H

#include "codestarresponse_p.h"

namespace QtAws {
namespace CodeStar {

class ListResourcesResponse;

class ListResourcesResponsePrivate : public CodeStarResponsePrivate {

public:

    explicit ListResourcesResponsePrivate(ListResourcesResponse * const q);

    void parseListResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourcesResponse)
    Q_DISABLE_COPY(ListResourcesResponsePrivate)

};

} // namespace CodeStar
} // namespace QtAws

#endif
