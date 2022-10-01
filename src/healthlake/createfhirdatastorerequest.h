// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFHIRDATASTOREREQUEST_H
#define QTAWS_CREATEFHIRDATASTOREREQUEST_H

#include "healthlakerequest.h"

namespace QtAws {
namespace HealthLake {

class CreateFHIRDatastoreRequestPrivate;

class QTAWSHEALTHLAKE_EXPORT CreateFHIRDatastoreRequest : public HealthLakeRequest {

public:
    CreateFHIRDatastoreRequest(const CreateFHIRDatastoreRequest &other);
    CreateFHIRDatastoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFHIRDatastoreRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
