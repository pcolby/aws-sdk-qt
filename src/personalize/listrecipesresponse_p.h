// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECIPESRESPONSE_P_H
#define QTAWS_LISTRECIPESRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class ListRecipesResponse;

class ListRecipesResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit ListRecipesResponsePrivate(ListRecipesResponse * const q);

    void parseListRecipesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRecipesResponse)
    Q_DISABLE_COPY(ListRecipesResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
