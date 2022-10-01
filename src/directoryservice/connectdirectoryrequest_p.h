// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTDIRECTORYREQUEST_P_H
#define QTAWS_CONNECTDIRECTORYREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "connectdirectoryrequest.h"

namespace QtAws {
namespace DirectoryService {

class ConnectDirectoryRequest;

class ConnectDirectoryRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    ConnectDirectoryRequestPrivate(const DirectoryServiceRequest::Action action,
                                   ConnectDirectoryRequest * const q);
    ConnectDirectoryRequestPrivate(const ConnectDirectoryRequestPrivate &other,
                                   ConnectDirectoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConnectDirectoryRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
