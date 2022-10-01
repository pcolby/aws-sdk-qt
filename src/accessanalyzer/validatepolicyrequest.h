// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEPOLICYREQUEST_H
#define QTAWS_VALIDATEPOLICYREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ValidatePolicyRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT ValidatePolicyRequest : public AccessAnalyzerRequest {

public:
    ValidatePolicyRequest(const ValidatePolicyRequest &other);
    ValidatePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidatePolicyRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
