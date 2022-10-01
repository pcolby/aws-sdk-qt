// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFHIRDATASTOREREQUEST_H
#define QTAWS_DELETEFHIRDATASTOREREQUEST_H

#include "healthlakerequest.h"

namespace QtAws {
namespace HealthLake {

class DeleteFHIRDatastoreRequestPrivate;

class QTAWSHEALTHLAKE_EXPORT DeleteFHIRDatastoreRequest : public HealthLakeRequest {

public:
    DeleteFHIRDatastoreRequest(const DeleteFHIRDatastoreRequest &other);
    DeleteFHIRDatastoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFHIRDatastoreRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
