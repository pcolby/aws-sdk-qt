// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFHIRDATASTORESREQUEST_P_H
#define QTAWS_LISTFHIRDATASTORESREQUEST_P_H

#include "healthlakerequest_p.h"
#include "listfhirdatastoresrequest.h"

namespace QtAws {
namespace HealthLake {

class ListFHIRDatastoresRequest;

class ListFHIRDatastoresRequestPrivate : public HealthLakeRequestPrivate {

public:
    ListFHIRDatastoresRequestPrivate(const HealthLakeRequest::Action action,
                                   ListFHIRDatastoresRequest * const q);
    ListFHIRDatastoresRequestPrivate(const ListFHIRDatastoresRequestPrivate &other,
                                   ListFHIRDatastoresRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFHIRDatastoresRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
