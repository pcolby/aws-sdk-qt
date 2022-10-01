// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETARCHIVERULEREQUEST_H
#define QTAWS_GETARCHIVERULEREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetArchiveRuleRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT GetArchiveRuleRequest : public AccessAnalyzerRequest {

public:
    GetArchiveRuleRequest(const GetArchiveRuleRequest &other);
    GetArchiveRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetArchiveRuleRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
