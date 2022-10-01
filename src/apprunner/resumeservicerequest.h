// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMESERVICEREQUEST_H
#define QTAWS_RESUMESERVICEREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class ResumeServiceRequestPrivate;

class QTAWSAPPRUNNER_EXPORT ResumeServiceRequest : public AppRunnerRequest {

public:
    ResumeServiceRequest(const ResumeServiceRequest &other);
    ResumeServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResumeServiceRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
