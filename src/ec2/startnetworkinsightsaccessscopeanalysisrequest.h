// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNETWORKINSIGHTSACCESSSCOPEANALYSISREQUEST_H
#define QTAWS_STARTNETWORKINSIGHTSACCESSSCOPEANALYSISREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class StartNetworkInsightsAccessScopeAnalysisRequestPrivate;

class QTAWSEC2_EXPORT StartNetworkInsightsAccessScopeAnalysisRequest : public Ec2Request {

public:
    StartNetworkInsightsAccessScopeAnalysisRequest(const StartNetworkInsightsAccessScopeAnalysisRequest &other);
    StartNetworkInsightsAccessScopeAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartNetworkInsightsAccessScopeAnalysisRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
