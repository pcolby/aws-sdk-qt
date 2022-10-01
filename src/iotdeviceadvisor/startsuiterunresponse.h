// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSUITERUNRESPONSE_H
#define QTAWS_STARTSUITERUNRESPONSE_H

#include "iotdeviceadvisorresponse.h"
#include "startsuiterunrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class StartSuiteRunResponsePrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT StartSuiteRunResponse : public IotDeviceAdvisorResponse {
    Q_OBJECT

public:
    StartSuiteRunResponse(const StartSuiteRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartSuiteRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSuiteRunResponse)
    Q_DISABLE_COPY(StartSuiteRunResponse)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
