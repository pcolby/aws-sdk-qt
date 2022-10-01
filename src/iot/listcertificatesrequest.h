// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCERTIFICATESREQUEST_H
#define QTAWS_LISTCERTIFICATESREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListCertificatesRequestPrivate;

class QTAWSIOT_EXPORT ListCertificatesRequest : public IoTRequest {

public:
    ListCertificatesRequest(const ListCertificatesRequest &other);
    ListCertificatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCertificatesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
