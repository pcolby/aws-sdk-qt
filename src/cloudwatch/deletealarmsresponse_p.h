// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALARMSRESPONSE_P_H
#define QTAWS_DELETEALARMSRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class DeleteAlarmsResponse;

class DeleteAlarmsResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit DeleteAlarmsResponsePrivate(DeleteAlarmsResponse * const q);

    void parseDeleteAlarmsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAlarmsResponse)
    Q_DISABLE_COPY(DeleteAlarmsResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
