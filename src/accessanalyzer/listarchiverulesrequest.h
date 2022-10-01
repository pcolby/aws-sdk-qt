// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTARCHIVERULESREQUEST_H
#define QTAWS_LISTARCHIVERULESREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListArchiveRulesRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT ListArchiveRulesRequest : public AccessAnalyzerRequest {

public:
    ListArchiveRulesRequest(const ListArchiveRulesRequest &other);
    ListArchiveRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListArchiveRulesRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
