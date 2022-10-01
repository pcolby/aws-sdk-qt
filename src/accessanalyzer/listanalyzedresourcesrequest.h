// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANALYZEDRESOURCESREQUEST_H
#define QTAWS_LISTANALYZEDRESOURCESREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListAnalyzedResourcesRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT ListAnalyzedResourcesRequest : public AccessAnalyzerRequest {

public:
    ListAnalyzedResourcesRequest(const ListAnalyzedResourcesRequest &other);
    ListAnalyzedResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnalyzedResourcesRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
