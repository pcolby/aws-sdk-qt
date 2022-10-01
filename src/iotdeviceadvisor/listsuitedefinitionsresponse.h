// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUITEDEFINITIONSRESPONSE_H
#define QTAWS_LISTSUITEDEFINITIONSRESPONSE_H

#include "iotdeviceadvisorresponse.h"
#include "listsuitedefinitionsrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class ListSuiteDefinitionsResponsePrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT ListSuiteDefinitionsResponse : public IotDeviceAdvisorResponse {
    Q_OBJECT

public:
    ListSuiteDefinitionsResponse(const ListSuiteDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSuiteDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSuiteDefinitionsResponse)
    Q_DISABLE_COPY(ListSuiteDefinitionsResponse)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
