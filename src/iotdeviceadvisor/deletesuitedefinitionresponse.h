// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUITEDEFINITIONRESPONSE_H
#define QTAWS_DELETESUITEDEFINITIONRESPONSE_H

#include "iotdeviceadvisorresponse.h"
#include "deletesuitedefinitionrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class DeleteSuiteDefinitionResponsePrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT DeleteSuiteDefinitionResponse : public IotDeviceAdvisorResponse {
    Q_OBJECT

public:
    DeleteSuiteDefinitionResponse(const DeleteSuiteDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSuiteDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSuiteDefinitionResponse)
    Q_DISABLE_COPY(DeleteSuiteDefinitionResponse)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
