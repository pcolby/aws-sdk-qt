// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIENCESRESPONSE_P_H
#define QTAWS_LISTEXPERIENCESRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class ListExperiencesResponse;

class ListExperiencesResponsePrivate : public KendraResponsePrivate {

public:

    explicit ListExperiencesResponsePrivate(ListExperiencesResponse * const q);

    void parseListExperiencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListExperiencesResponse)
    Q_DISABLE_COPY(ListExperiencesResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
