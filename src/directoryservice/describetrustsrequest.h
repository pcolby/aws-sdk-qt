// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTSREQUEST_H
#define QTAWS_DESCRIBETRUSTSREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeTrustsRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeTrustsRequest : public DirectoryServiceRequest {

public:
    DescribeTrustsRequest(const DescribeTrustsRequest &other);
    DescribeTrustsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrustsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
