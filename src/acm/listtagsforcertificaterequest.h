// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORCERTIFICATEREQUEST_H
#define QTAWS_LISTTAGSFORCERTIFICATEREQUEST_H

#include "acmrequest.h"

namespace QtAws {
namespace Acm {

class ListTagsForCertificateRequestPrivate;

class QTAWSACM_EXPORT ListTagsForCertificateRequest : public AcmRequest {

public:
    ListTagsForCertificateRequest(const ListTagsForCertificateRequest &other);
    ListTagsForCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
