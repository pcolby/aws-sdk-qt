// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNETWORKINSIGHTSANALYSISREQUEST_H
#define QTAWS_STARTNETWORKINSIGHTSANALYSISREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class StartNetworkInsightsAnalysisRequestPrivate;

class QTAWSEC2_EXPORT StartNetworkInsightsAnalysisRequest : public Ec2Request {

public:
    StartNetworkInsightsAnalysisRequest(const StartNetworkInsightsAnalysisRequest &other);
    StartNetworkInsightsAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartNetworkInsightsAnalysisRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
