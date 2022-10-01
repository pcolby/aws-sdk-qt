// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDJOBTEMPLATESREQUEST_P_H
#define QTAWS_LISTMANAGEDJOBTEMPLATESREQUEST_P_H

#include "iotrequest_p.h"
#include "listmanagedjobtemplatesrequest.h"

namespace QtAws {
namespace IoT {

class ListManagedJobTemplatesRequest;

class ListManagedJobTemplatesRequestPrivate : public IoTRequestPrivate {

public:
    ListManagedJobTemplatesRequestPrivate(const IoTRequest::Action action,
                                   ListManagedJobTemplatesRequest * const q);
    ListManagedJobTemplatesRequestPrivate(const ListManagedJobTemplatesRequestPrivate &other,
                                   ListManagedJobTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListManagedJobTemplatesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
