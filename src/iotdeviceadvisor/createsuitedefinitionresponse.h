// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUITEDEFINITIONRESPONSE_H
#define QTAWS_CREATESUITEDEFINITIONRESPONSE_H

#include "iotdeviceadvisorresponse.h"
#include "createsuitedefinitionrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class CreateSuiteDefinitionResponsePrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT CreateSuiteDefinitionResponse : public IotDeviceAdvisorResponse {
    Q_OBJECT

public:
    CreateSuiteDefinitionResponse(const CreateSuiteDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSuiteDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSuiteDefinitionResponse)
    Q_DISABLE_COPY(CreateSuiteDefinitionResponse)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
