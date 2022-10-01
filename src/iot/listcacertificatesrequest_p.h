// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCACERTIFICATESREQUEST_P_H
#define QTAWS_LISTCACERTIFICATESREQUEST_P_H

#include "iotrequest_p.h"
#include "listcacertificatesrequest.h"

namespace QtAws {
namespace IoT {

class ListCACertificatesRequest;

class ListCACertificatesRequestPrivate : public IoTRequestPrivate {

public:
    ListCACertificatesRequestPrivate(const IoTRequest::Action action,
                                   ListCACertificatesRequest * const q);
    ListCACertificatesRequestPrivate(const ListCACertificatesRequestPrivate &other,
                                   ListCACertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCACertificatesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
