// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRUSTREQUEST_H
#define QTAWS_CREATETRUSTREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateTrustRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT CreateTrustRequest : public DirectoryServiceRequest {

public:
    CreateTrustRequest(const CreateTrustRequest &other);
    CreateTrustRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrustRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
