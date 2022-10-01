// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANALYZERSREQUEST_H
#define QTAWS_LISTANALYZERSREQUEST_H

#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListAnalyzersRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT ListAnalyzersRequest : public AccessAnalyzerRequest {

public:
    ListAnalyzersRequest(const ListAnalyzersRequest &other);
    ListAnalyzersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnalyzersRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
