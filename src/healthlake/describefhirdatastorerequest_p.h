// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFHIRDATASTOREREQUEST_P_H
#define QTAWS_DESCRIBEFHIRDATASTOREREQUEST_P_H

#include "healthlakerequest_p.h"
#include "describefhirdatastorerequest.h"

namespace QtAws {
namespace HealthLake {

class DescribeFHIRDatastoreRequest;

class DescribeFHIRDatastoreRequestPrivate : public HealthLakeRequestPrivate {

public:
    DescribeFHIRDatastoreRequestPrivate(const HealthLakeRequest::Action action,
                                   DescribeFHIRDatastoreRequest * const q);
    DescribeFHIRDatastoreRequestPrivate(const DescribeFHIRDatastoreRequestPrivate &other,
                                   DescribeFHIRDatastoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFHIRDatastoreRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
