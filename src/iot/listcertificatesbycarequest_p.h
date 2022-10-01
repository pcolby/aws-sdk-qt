// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCERTIFICATESBYCAREQUEST_P_H
#define QTAWS_LISTCERTIFICATESBYCAREQUEST_P_H

#include "iotrequest_p.h"
#include "listcertificatesbycarequest.h"

namespace QtAws {
namespace IoT {

class ListCertificatesByCARequest;

class ListCertificatesByCARequestPrivate : public IoTRequestPrivate {

public:
    ListCertificatesByCARequestPrivate(const IoTRequest::Action action,
                                   ListCertificatesByCARequest * const q);
    ListCertificatesByCARequestPrivate(const ListCertificatesByCARequestPrivate &other,
                                   ListCertificatesByCARequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCertificatesByCARequest)

};

} // namespace IoT
} // namespace QtAws

#endif
