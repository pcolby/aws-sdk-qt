// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCHEDULERUNRESPONSE_H
#define QTAWS_SCHEDULERUNRESPONSE_H

#include "devicefarmresponse.h"
#include "schedulerunrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ScheduleRunResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ScheduleRunResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ScheduleRunResponse(const ScheduleRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ScheduleRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ScheduleRunResponse)
    Q_DISABLE_COPY(ScheduleRunResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
