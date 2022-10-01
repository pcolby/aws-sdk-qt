// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFILTERSRESPONSE_P_H
#define QTAWS_LISTFILTERSRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class ListFiltersResponse;

class ListFiltersResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit ListFiltersResponsePrivate(ListFiltersResponse * const q);

    void parseListFiltersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFiltersResponse)
    Q_DISABLE_COPY(ListFiltersResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
