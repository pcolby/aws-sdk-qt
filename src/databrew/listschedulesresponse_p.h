// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEDULESRESPONSE_P_H
#define QTAWS_LISTSCHEDULESRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class ListSchedulesResponse;

class ListSchedulesResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit ListSchedulesResponsePrivate(ListSchedulesResponse * const q);

    void parseListSchedulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSchedulesResponse)
    Q_DISABLE_COPY(ListSchedulesResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
