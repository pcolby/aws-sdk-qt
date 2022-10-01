// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBATCHJOBRESPONSE_P_H
#define QTAWS_STARTBATCHJOBRESPONSE_P_H

#include "m2response_p.h"

namespace QtAws {
namespace M2 {

class StartBatchJobResponse;

class StartBatchJobResponsePrivate : public M2ResponsePrivate {

public:

    explicit StartBatchJobResponsePrivate(StartBatchJobResponse * const q);

    void parseStartBatchJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartBatchJobResponse)
    Q_DISABLE_COPY(StartBatchJobResponsePrivate)

};

} // namespace M2
} // namespace QtAws

#endif
