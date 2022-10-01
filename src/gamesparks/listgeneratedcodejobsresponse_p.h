// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGENERATEDCODEJOBSRESPONSE_P_H
#define QTAWS_LISTGENERATEDCODEJOBSRESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class ListGeneratedCodeJobsResponse;

class ListGeneratedCodeJobsResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit ListGeneratedCodeJobsResponsePrivate(ListGeneratedCodeJobsResponse * const q);

    void parseListGeneratedCodeJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGeneratedCodeJobsResponse)
    Q_DISABLE_COPY(ListGeneratedCodeJobsResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
