// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEARCHIVERULEREQUEST_H
#define QTAWS_DELETEARCHIVERULEREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class DeleteArchiveRuleRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT DeleteArchiveRuleRequest : public AccessAnalyzerRequest {

public:
    DeleteArchiveRuleRequest(const DeleteArchiveRuleRequest &other);
    DeleteArchiveRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteArchiveRuleRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
