// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINSIGHTSANALYSISREQUEST_H
#define QTAWS_DELETENETWORKINSIGHTSANALYSISREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInsightsAnalysisRequestPrivate;

class QTAWSEC2_EXPORT DeleteNetworkInsightsAnalysisRequest : public Ec2Request {

public:
    DeleteNetworkInsightsAnalysisRequest(const DeleteNetworkInsightsAnalysisRequest &other);
    DeleteNetworkInsightsAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkInsightsAnalysisRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
