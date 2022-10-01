// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGSERVERCERTIFICATEREQUEST_H
#define QTAWS_TAGSERVERCERTIFICATEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class TagServerCertificateRequestPrivate;

class QTAWSIAM_EXPORT TagServerCertificateRequest : public IamRequest {

public:
    TagServerCertificateRequest(const TagServerCertificateRequest &other);
    TagServerCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagServerCertificateRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
