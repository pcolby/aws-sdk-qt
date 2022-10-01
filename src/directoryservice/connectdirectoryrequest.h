// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTDIRECTORYREQUEST_H
#define QTAWS_CONNECTDIRECTORYREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class ConnectDirectoryRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT ConnectDirectoryRequest : public DirectoryServiceRequest {

public:
    ConnectDirectoryRequest(const ConnectDirectoryRequest &other);
    ConnectDirectoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConnectDirectoryRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
