// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONCONFORMANCEPACKDETAILEDSTATUSRESPONSE_H
#define QTAWS_GETORGANIZATIONCONFORMANCEPACKDETAILEDSTATUSRESPONSE_H

#include "configserviceresponse.h"
#include "getorganizationconformancepackdetailedstatusrequest.h"

namespace QtAws {
namespace ConfigService {

class GetOrganizationConformancePackDetailedStatusResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT GetOrganizationConformancePackDetailedStatusResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetOrganizationConformancePackDetailedStatusResponse(const GetOrganizationConformancePackDetailedStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOrganizationConformancePackDetailedStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOrganizationConformancePackDetailedStatusResponse)
    Q_DISABLE_COPY(GetOrganizationConformancePackDetailedStatusResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
