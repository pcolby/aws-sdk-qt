// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEFINEANALYSISSCHEMEREQUEST_H
#define QTAWS_DEFINEANALYSISSCHEMEREQUEST_H

#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class DefineAnalysisSchemeRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT DefineAnalysisSchemeRequest : public CloudSearchRequest {

public:
    DefineAnalysisSchemeRequest(const DefineAnalysisSchemeRequest &other);
    DefineAnalysisSchemeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DefineAnalysisSchemeRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
