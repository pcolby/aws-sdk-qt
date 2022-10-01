// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPUTERREQUEST_H
#define QTAWS_CREATECOMPUTERREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateComputerRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT CreateComputerRequest : public DirectoryServiceRequest {

public:
    CreateComputerRequest(const CreateComputerRequest &other);
    CreateComputerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateComputerRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
