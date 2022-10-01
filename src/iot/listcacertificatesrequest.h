// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCACERTIFICATESREQUEST_H
#define QTAWS_LISTCACERTIFICATESREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListCACertificatesRequestPrivate;

class QTAWSIOT_EXPORT ListCACertificatesRequest : public IoTRequest {

public:
    ListCACertificatesRequest(const ListCACertificatesRequest &other);
    ListCACertificatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCACertificatesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
