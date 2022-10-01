// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOUTGOINGCERTIFICATESREQUEST_P_H
#define QTAWS_LISTOUTGOINGCERTIFICATESREQUEST_P_H

#include "iotrequest_p.h"
#include "listoutgoingcertificatesrequest.h"

namespace QtAws {
namespace IoT {

class ListOutgoingCertificatesRequest;

class ListOutgoingCertificatesRequestPrivate : public IoTRequestPrivate {

public:
    ListOutgoingCertificatesRequestPrivate(const IoTRequest::Action action,
                                   ListOutgoingCertificatesRequest * const q);
    ListOutgoingCertificatesRequestPrivate(const ListOutgoingCertificatesRequestPrivate &other,
                                   ListOutgoingCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOutgoingCertificatesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
