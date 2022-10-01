// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADDOCUMENTSREQUEST_H
#define QTAWS_UPLOADDOCUMENTSREQUEST_H

#include "cloudsearchdomainrequest.h"

namespace QtAws {
namespace CloudSearchDomain {

class UploadDocumentsRequestPrivate;

class QTAWSCLOUDSEARCHDOMAIN_EXPORT UploadDocumentsRequest : public CloudSearchDomainRequest {

public:
    UploadDocumentsRequest(const UploadDocumentsRequest &other);
    UploadDocumentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadDocumentsRequest)

};

} // namespace CloudSearchDomain
} // namespace QtAws

#endif
