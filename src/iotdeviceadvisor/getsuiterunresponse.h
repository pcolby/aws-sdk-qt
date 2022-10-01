// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUITERUNRESPONSE_H
#define QTAWS_GETSUITERUNRESPONSE_H

#include "iotdeviceadvisorresponse.h"
#include "getsuiterunrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class GetSuiteRunResponsePrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT GetSuiteRunResponse : public IotDeviceAdvisorResponse {
    Q_OBJECT

public:
    GetSuiteRunResponse(const GetSuiteRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSuiteRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSuiteRunResponse)
    Q_DISABLE_COPY(GetSuiteRunResponse)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
