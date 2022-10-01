// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBRESPONSE_P_H
#define QTAWS_UPDATEJOBRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateJobResponse;

class UpdateJobResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateJobResponsePrivate(UpdateJobResponse * const q);

    void parseUpdateJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateJobResponse)
    Q_DISABLE_COPY(UpdateJobResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
