// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFHIRDATASTOREREQUEST_P_H
#define QTAWS_CREATEFHIRDATASTOREREQUEST_P_H

#include "healthlakerequest_p.h"
#include "createfhirdatastorerequest.h"

namespace QtAws {
namespace HealthLake {

class CreateFHIRDatastoreRequest;

class CreateFHIRDatastoreRequestPrivate : public HealthLakeRequestPrivate {

public:
    CreateFHIRDatastoreRequestPrivate(const HealthLakeRequest::Action action,
                                   CreateFHIRDatastoreRequest * const q);
    CreateFHIRDatastoreRequestPrivate(const CreateFHIRDatastoreRequestPrivate &other,
                                   CreateFHIRDatastoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFHIRDatastoreRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
