// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYARCHIVERULEREQUEST_H
#define QTAWS_APPLYARCHIVERULEREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ApplyArchiveRuleRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT ApplyArchiveRuleRequest : public AccessAnalyzerRequest {

public:
    ApplyArchiveRuleRequest(const ApplyArchiveRuleRequest &other);
    ApplyArchiveRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplyArchiveRuleRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
