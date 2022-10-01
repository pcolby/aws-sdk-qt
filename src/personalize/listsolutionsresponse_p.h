// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOLUTIONSRESPONSE_P_H
#define QTAWS_LISTSOLUTIONSRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class ListSolutionsResponse;

class ListSolutionsResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit ListSolutionsResponsePrivate(ListSolutionsResponse * const q);

    void parseListSolutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSolutionsResponse)
    Q_DISABLE_COPY(ListSolutionsResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
