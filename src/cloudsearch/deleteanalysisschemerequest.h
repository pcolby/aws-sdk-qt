// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANALYSISSCHEMEREQUEST_H
#define QTAWS_DELETEANALYSISSCHEMEREQUEST_H

#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class DeleteAnalysisSchemeRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT DeleteAnalysisSchemeRequest : public CloudSearchRequest {

public:
    DeleteAnalysisSchemeRequest(const DeleteAnalysisSchemeRequest &other);
    DeleteAnalysisSchemeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAnalysisSchemeRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
