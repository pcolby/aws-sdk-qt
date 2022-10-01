// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTORYREQUEST_H
#define QTAWS_CREATEDIRECTORYREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateDirectoryRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT CreateDirectoryRequest : public DirectoryServiceRequest {

public:
    CreateDirectoryRequest(const CreateDirectoryRequest &other);
    CreateDirectoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDirectoryRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
