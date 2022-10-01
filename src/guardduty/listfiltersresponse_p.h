// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFILTERSRESPONSE_P_H
#define QTAWS_LISTFILTERSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class ListFiltersResponse;

class ListFiltersResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit ListFiltersResponsePrivate(ListFiltersResponse * const q);

    void parseListFiltersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFiltersResponse)
    Q_DISABLE_COPY(ListFiltersResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
