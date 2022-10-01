// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SHAREDIRECTORYREQUEST_H
#define QTAWS_SHAREDIRECTORYREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class ShareDirectoryRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT ShareDirectoryRequest : public DirectoryServiceRequest {

public:
    ShareDirectoryRequest(const ShareDirectoryRequest &other);
    ShareDirectoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ShareDirectoryRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
