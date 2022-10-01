// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHSEGMENTJOBRESPONSE_P_H
#define QTAWS_CREATEBATCHSEGMENTJOBRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class CreateBatchSegmentJobResponse;

class CreateBatchSegmentJobResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit CreateBatchSegmentJobResponsePrivate(CreateBatchSegmentJobResponse * const q);

    void parseCreateBatchSegmentJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBatchSegmentJobResponse)
    Q_DISABLE_COPY(CreateBatchSegmentJobResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
