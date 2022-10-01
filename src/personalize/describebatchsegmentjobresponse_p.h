// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBATCHSEGMENTJOBRESPONSE_P_H
#define QTAWS_DESCRIBEBATCHSEGMENTJOBRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class DescribeBatchSegmentJobResponse;

class DescribeBatchSegmentJobResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit DescribeBatchSegmentJobResponsePrivate(DescribeBatchSegmentJobResponse * const q);

    void parseDescribeBatchSegmentJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBatchSegmentJobResponse)
    Q_DISABLE_COPY(DescribeBatchSegmentJobResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
