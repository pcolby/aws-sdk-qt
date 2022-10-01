// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKINSIGHTSACCESSSCOPEANALYSISFINDINGSREQUEST_H
#define QTAWS_GETNETWORKINSIGHTSACCESSSCOPEANALYSISFINDINGSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetNetworkInsightsAccessScopeAnalysisFindingsRequestPrivate;

class QTAWSEC2_EXPORT GetNetworkInsightsAccessScopeAnalysisFindingsRequest : public Ec2Request {

public:
    GetNetworkInsightsAccessScopeAnalysisFindingsRequest(const GetNetworkInsightsAccessScopeAnalysisFindingsRequest &other);
    GetNetworkInsightsAccessScopeAnalysisFindingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkInsightsAccessScopeAnalysisFindingsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
