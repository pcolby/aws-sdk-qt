// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPCERTIFICATEAUTHORITIESREQUEST_H
#define QTAWS_LISTGROUPCERTIFICATEAUTHORITIESREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class ListGroupCertificateAuthoritiesRequestPrivate;

class QTAWSGREENGRASS_EXPORT ListGroupCertificateAuthoritiesRequest : public GreengrassRequest {

public:
    ListGroupCertificateAuthoritiesRequest(const ListGroupCertificateAuthoritiesRequest &other);
    ListGroupCertificateAuthoritiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupCertificateAuthoritiesRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
