// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADDOCUMENTSREQUEST_P_H
#define QTAWS_UPLOADDOCUMENTSREQUEST_P_H

#include "cloudsearchdomainrequest_p.h"
#include "uploaddocumentsrequest.h"

namespace QtAws {
namespace CloudSearchDomain {

class UploadDocumentsRequest;

class UploadDocumentsRequestPrivate : public CloudSearchDomainRequestPrivate {

public:
    UploadDocumentsRequestPrivate(const CloudSearchDomainRequest::Action action,
                                   UploadDocumentsRequest * const q);
    UploadDocumentsRequestPrivate(const UploadDocumentsRequestPrivate &other,
                                   UploadDocumentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UploadDocumentsRequest)

};

} // namespace CloudSearchDomain
} // namespace QtAws

#endif
