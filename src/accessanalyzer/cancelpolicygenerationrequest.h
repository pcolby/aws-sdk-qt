// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELPOLICYGENERATIONREQUEST_H
#define QTAWS_CANCELPOLICYGENERATIONREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class CancelPolicyGenerationRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT CancelPolicyGenerationRequest : public AccessAnalyzerRequest {

public:
    CancelPolicyGenerationRequest(const CancelPolicyGenerationRequest &other);
    CancelPolicyGenerationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelPolicyGenerationRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
