// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSHAREDIRECTORYREQUEST_H
#define QTAWS_UNSHAREDIRECTORYREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class UnshareDirectoryRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT UnshareDirectoryRequest : public DirectoryServiceRequest {

public:
    UnshareDirectoryRequest(const UnshareDirectoryRequest &other);
    UnshareDirectoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnshareDirectoryRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
