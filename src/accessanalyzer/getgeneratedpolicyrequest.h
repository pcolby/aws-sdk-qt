// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGENERATEDPOLICYREQUEST_H
#define QTAWS_GETGENERATEDPOLICYREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetGeneratedPolicyRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT GetGeneratedPolicyRequest : public AccessAnalyzerRequest {

public:
    GetGeneratedPolicyRequest(const GetGeneratedPolicyRequest &other);
    GetGeneratedPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGeneratedPolicyRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
