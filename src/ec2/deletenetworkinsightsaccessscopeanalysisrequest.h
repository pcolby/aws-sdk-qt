// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINSIGHTSACCESSSCOPEANALYSISREQUEST_H
#define QTAWS_DELETENETWORKINSIGHTSACCESSSCOPEANALYSISREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInsightsAccessScopeAnalysisRequestPrivate;

class QTAWSEC2_EXPORT DeleteNetworkInsightsAccessScopeAnalysisRequest : public Ec2Request {

public:
    DeleteNetworkInsightsAccessScopeAnalysisRequest(const DeleteNetworkInsightsAccessScopeAnalysisRequest &other);
    DeleteNetworkInsightsAccessScopeAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkInsightsAccessScopeAnalysisRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
