// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCEDETAILSBYRESOURCERESPONSE_H
#define QTAWS_GETCOMPLIANCEDETAILSBYRESOURCERESPONSE_H

#include "configserviceresponse.h"
#include "getcompliancedetailsbyresourcerequest.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceDetailsByResourceResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT GetComplianceDetailsByResourceResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetComplianceDetailsByResourceResponse(const GetComplianceDetailsByResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetComplianceDetailsByResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComplianceDetailsByResourceResponse)
    Q_DISABLE_COPY(GetComplianceDetailsByResourceResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
