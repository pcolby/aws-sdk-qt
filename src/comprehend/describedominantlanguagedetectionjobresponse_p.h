// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMINANTLANGUAGEDETECTIONJOBRESPONSE_P_H
#define QTAWS_DESCRIBEDOMINANTLANGUAGEDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DescribeDominantLanguageDetectionJobResponse;

class DescribeDominantLanguageDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DescribeDominantLanguageDetectionJobResponsePrivate(DescribeDominantLanguageDetectionJobResponse * const q);

    void parseDescribeDominantLanguageDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDominantLanguageDetectionJobResponse)
    Q_DISABLE_COPY(DescribeDominantLanguageDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
