// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCHEDULERUNREQUEST_H
#define QTAWS_SCHEDULERUNREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ScheduleRunRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ScheduleRunRequest : public DeviceFarmRequest {

public:
    ScheduleRunRequest(const ScheduleRunRequest &other);
    ScheduleRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ScheduleRunRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
