// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFHIRDATASTOREREQUEST_H
#define QTAWS_DESCRIBEFHIRDATASTOREREQUEST_H

#include "healthlakerequest.h"

namespace QtAws {
namespace HealthLake {

class DescribeFHIRDatastoreRequestPrivate;

class QTAWSHEALTHLAKE_EXPORT DescribeFHIRDatastoreRequest : public HealthLakeRequest {

public:
    DescribeFHIRDatastoreRequest(const DescribeFHIRDatastoreRequest &other);
    DescribeFHIRDatastoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFHIRDatastoreRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
