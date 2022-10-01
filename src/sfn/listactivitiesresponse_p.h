// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVITIESRESPONSE_P_H
#define QTAWS_LISTACTIVITIESRESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class ListActivitiesResponse;

class ListActivitiesResponsePrivate : public SfnResponsePrivate {

public:

    explicit ListActivitiesResponsePrivate(ListActivitiesResponse * const q);

    void parseListActivitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListActivitiesResponse)
    Q_DISABLE_COPY(ListActivitiesResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
