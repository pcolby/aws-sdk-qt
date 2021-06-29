/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_UPDATESUITEDEFINITIONRESPONSE_H
#define QTAWS_UPDATESUITEDEFINITIONRESPONSE_H

#include "iotdeviceadvisorresponse.h"
#include "updatesuitedefinitionrequest.h"

namespace QtAws {
namespace IoTDeviceAdvisor {

class UpdateSuiteDefinitionResponsePrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT UpdateSuiteDefinitionResponse : public IoTDeviceAdvisorResponse {
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

} // namespace IoTDeviceAdvisor
} // namespace QtAws

#endif
