// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPOLICYGENERATIONREQUEST_H
#define QTAWS_STARTPOLICYGENERATIONREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class StartPolicyGenerationRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT StartPolicyGenerationRequest : public AccessAnalyzerRequest {

public:
    StartPolicyGenerationRequest(const StartPolicyGenerationRequest &other);
    StartPolicyGenerationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartPolicyGenerationRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
