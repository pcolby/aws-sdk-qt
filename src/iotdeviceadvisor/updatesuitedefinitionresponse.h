// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUITEDEFINITIONRESPONSE_H
#define QTAWS_UPDATESUITEDEFINITIONRESPONSE_H

#include "iotdeviceadvisorresponse.h"
#include "updatesuitedefinitionrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class UpdateSuiteDefinitionResponsePrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT UpdateSuiteDefinitionResponse : public IotDeviceAdvisorResponse {
    Q_OBJECT

public:
    UpdateSuiteDefinitionResponse(const UpdateSuiteDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSuiteDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSuiteDefinitionResponse)
    Q_DISABLE_COPY(UpdateSuiteDefinitionResponse)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
