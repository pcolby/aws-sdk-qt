// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBEXECUTIONSFORJOBRESPONSE_P_H
#define QTAWS_LISTJOBEXECUTIONSFORJOBRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListJobExecutionsForJobResponse;

class ListJobExecutionsForJobResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListJobExecutionsForJobResponsePrivate(ListJobExecutionsForJobResponse * const q);

    void parseListJobExecutionsForJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListJobExecutionsForJobResponse)
    Q_DISABLE_COPY(ListJobExecutionsForJobResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
