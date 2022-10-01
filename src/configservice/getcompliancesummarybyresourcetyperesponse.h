// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCESUMMARYBYRESOURCETYPERESPONSE_H
#define QTAWS_GETCOMPLIANCESUMMARYBYRESOURCETYPERESPONSE_H

#include "configserviceresponse.h"
#include "getcompliancesummarybyresourcetyperequest.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceSummaryByResourceTypeResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT GetComplianceSummaryByResourceTypeResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetComplianceSummaryByResourceTypeResponse(const GetComplianceSummaryByResourceTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetComplianceSummaryByResourceTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComplianceSummaryByResourceTypeResponse)
    Q_DISABLE_COPY(GetComplianceSummaryByResourceTypeResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
