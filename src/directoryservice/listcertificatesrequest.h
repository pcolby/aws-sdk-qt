// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCERTIFICATESREQUEST_H
#define QTAWS_LISTCERTIFICATESREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class ListCertificatesRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT ListCertificatesRequest : public DirectoryServiceRequest {

public:
    ListCertificatesRequest(const ListCertificatesRequest &other);
    ListCertificatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCertificatesRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
