// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANALYSISSCHEMEREQUEST_P_H
#define QTAWS_DELETEANALYSISSCHEMEREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "deleteanalysisschemerequest.h"

namespace QtAws {
namespace CloudSearch {

class DeleteAnalysisSchemeRequest;

class DeleteAnalysisSchemeRequestPrivate : public CloudSearchRequestPrivate {

public:
    DeleteAnalysisSchemeRequestPrivate(const CloudSearchRequest::Action action,
                                   DeleteAnalysisSchemeRequest * const q);
    DeleteAnalysisSchemeRequestPrivate(const DeleteAnalysisSchemeRequestPrivate &other,
                                   DeleteAnalysisSchemeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAnalysisSchemeRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
