// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNINGCERTIFICATESREQUEST_H
#define QTAWS_LISTSIGNINGCERTIFICATESREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListSigningCertificatesRequestPrivate;

class QTAWSIAM_EXPORT ListSigningCertificatesRequest : public IamRequest {

public:
    ListSigningCertificatesRequest(const ListSigningCertificatesRequest &other);
    ListSigningCertificatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSigningCertificatesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
