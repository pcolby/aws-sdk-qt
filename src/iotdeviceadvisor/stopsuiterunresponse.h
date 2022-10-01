// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSUITERUNRESPONSE_H
#define QTAWS_STOPSUITERUNRESPONSE_H

#include "iotdeviceadvisorresponse.h"
#include "stopsuiterunrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class StopSuiteRunResponsePrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT StopSuiteRunResponse : public IotDeviceAdvisorResponse {
    Q_OBJECT

public:
    StopSuiteRunResponse(const StopSuiteRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopSuiteRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopSuiteRunResponse)
    Q_DISABLE_COPY(StopSuiteRunResponse)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
