// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFHIRDATASTOREREQUEST_P_H
#define QTAWS_DELETEFHIRDATASTOREREQUEST_P_H

#include "healthlakerequest_p.h"
#include "deletefhirdatastorerequest.h"

namespace QtAws {
namespace HealthLake {

class DeleteFHIRDatastoreRequest;

class DeleteFHIRDatastoreRequestPrivate : public HealthLakeRequestPrivate {

public:
    DeleteFHIRDatastoreRequestPrivate(const HealthLakeRequest::Action action,
                                   DeleteFHIRDatastoreRequest * const q);
    DeleteFHIRDatastoreRequestPrivate(const DeleteFHIRDatastoreRequestPrivate &other,
                                   DeleteFHIRDatastoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFHIRDatastoreRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
