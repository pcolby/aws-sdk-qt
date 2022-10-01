// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEARCHIVERULEREQUEST_H
#define QTAWS_UPDATEARCHIVERULEREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class UpdateArchiveRuleRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT UpdateArchiveRuleRequest : public AccessAnalyzerRequest {

public:
    UpdateArchiveRuleRequest(const UpdateArchiveRuleRequest &other);
    UpdateArchiveRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateArchiveRuleRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
