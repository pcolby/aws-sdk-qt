// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSCHEMAEXTENSIONREQUEST_P_H
#define QTAWS_STARTSCHEMAEXTENSIONREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "startschemaextensionrequest.h"

namespace QtAws {
namespace DirectoryService {

class StartSchemaExtensionRequest;

class StartSchemaExtensionRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    StartSchemaExtensionRequestPrivate(const DirectoryServiceRequest::Action action,
                                   StartSchemaExtensionRequest * const q);
    StartSchemaExtensionRequestPrivate(const StartSchemaExtensionRequestPrivate &other,
                                   StartSchemaExtensionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartSchemaExtensionRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
