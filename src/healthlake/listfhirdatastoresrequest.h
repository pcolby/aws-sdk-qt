// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFHIRDATASTORESREQUEST_H
#define QTAWS_LISTFHIRDATASTORESREQUEST_H

#include "healthlakerequest.h"

namespace QtAws {
namespace HealthLake {

class ListFHIRDatastoresRequestPrivate;

class QTAWSHEALTHLAKE_EXPORT ListFHIRDatastoresRequest : public HealthLakeRequest {

public:
    ListFHIRDatastoresRequest(const ListFHIRDatastoresRequest &other);
    ListFHIRDatastoresRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFHIRDatastoresRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
