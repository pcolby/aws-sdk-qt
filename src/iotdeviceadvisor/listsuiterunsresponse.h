// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUITERUNSRESPONSE_H
#define QTAWS_LISTSUITERUNSRESPONSE_H

#include "iotdeviceadvisorresponse.h"
#include "listsuiterunsrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class ListSuiteRunsResponsePrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT ListSuiteRunsResponse : public IotDeviceAdvisorResponse {
    Q_OBJECT

public:
    ListSuiteRunsResponse(const ListSuiteRunsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSuiteRunsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSuiteRunsResponse)
    Q_DISABLE_COPY(ListSuiteRunsResponse)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
