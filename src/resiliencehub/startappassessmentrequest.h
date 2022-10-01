// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAPPASSESSMENTREQUEST_H
#define QTAWS_STARTAPPASSESSMENTREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class StartAppAssessmentRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT StartAppAssessmentRequest : public ResilienceHubRequest {

public:
    StartAppAssessmentRequest(const StartAppAssessmentRequest &other);
    StartAppAssessmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAppAssessmentRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
