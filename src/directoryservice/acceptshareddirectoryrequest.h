// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTSHAREDDIRECTORYREQUEST_H
#define QTAWS_ACCEPTSHAREDDIRECTORYREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class AcceptSharedDirectoryRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT AcceptSharedDirectoryRequest : public DirectoryServiceRequest {

public:
    AcceptSharedDirectoryRequest(const AcceptSharedDirectoryRequest &other);
    AcceptSharedDirectoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptSharedDirectoryRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
