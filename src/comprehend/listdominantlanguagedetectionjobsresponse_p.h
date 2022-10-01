// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMINANTLANGUAGEDETECTIONJOBSRESPONSE_P_H
#define QTAWS_LISTDOMINANTLANGUAGEDETECTIONJOBSRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class ListDominantLanguageDetectionJobsResponse;

class ListDominantLanguageDetectionJobsResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit ListDominantLanguageDetectionJobsResponsePrivate(ListDominantLanguageDetectionJobsResponse * const q);

    void parseListDominantLanguageDetectionJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDominantLanguageDetectionJobsResponse)
    Q_DISABLE_COPY(ListDominantLanguageDetectionJobsResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
