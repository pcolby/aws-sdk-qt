// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOLUTIONVERSIONSRESPONSE_P_H
#define QTAWS_LISTSOLUTIONVERSIONSRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class ListSolutionVersionsResponse;

class ListSolutionVersionsResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit ListSolutionVersionsResponsePrivate(ListSolutionVersionsResponse * const q);

    void parseListSolutionVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSolutionVersionsResponse)
    Q_DISABLE_COPY(ListSolutionVersionsResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
