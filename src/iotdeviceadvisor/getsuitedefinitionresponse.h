// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUITEDEFINITIONRESPONSE_H
#define QTAWS_GETSUITEDEFINITIONRESPONSE_H

#include "iotdeviceadvisorresponse.h"
#include "getsuitedefinitionrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class GetSuiteDefinitionResponsePrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT GetSuiteDefinitionResponse : public IotDeviceAdvisorResponse {
    Q_OBJECT

public:
    GetSuiteDefinitionResponse(const GetSuiteDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSuiteDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSuiteDefinitionResponse)
    Q_DISABLE_COPY(GetSuiteDefinitionResponse)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
