// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCEDETAILSBYRESOURCERESPONSE_P_H
#define QTAWS_GETCOMPLIANCEDETAILSBYRESOURCERESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceDetailsByResourceResponse;

class GetComplianceDetailsByResourceResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetComplianceDetailsByResourceResponsePrivate(GetComplianceDetailsByResourceResponse * const q);

    void parseGetComplianceDetailsByResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetComplianceDetailsByResourceResponse)
    Q_DISABLE_COPY(GetComplianceDetailsByResourceResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
