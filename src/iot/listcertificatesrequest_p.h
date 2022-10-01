// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCERTIFICATESREQUEST_P_H
#define QTAWS_LISTCERTIFICATESREQUEST_P_H

#include "iotrequest_p.h"
#include "listcertificatesrequest.h"

namespace QtAws {
namespace IoT {

class ListCertificatesRequest;

class ListCertificatesRequestPrivate : public IoTRequestPrivate {

public:
    ListCertificatesRequestPrivate(const IoTRequest::Action action,
                                   ListCertificatesRequest * const q);
    ListCertificatesRequestPrivate(const ListCertificatesRequestPrivate &other,
                                   ListCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCertificatesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
