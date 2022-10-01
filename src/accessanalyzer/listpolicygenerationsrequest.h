// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYGENERATIONSREQUEST_H
#define QTAWS_LISTPOLICYGENERATIONSREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListPolicyGenerationsRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT ListPolicyGenerationsRequest : public AccessAnalyzerRequest {

public:
    ListPolicyGenerationsRequest(const ListPolicyGenerationsRequest &other);
    ListPolicyGenerationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPolicyGenerationsRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
