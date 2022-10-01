// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSCHEMAEXTENSIONREQUEST_P_H
#define QTAWS_CANCELSCHEMAEXTENSIONREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "cancelschemaextensionrequest.h"

namespace QtAws {
namespace DirectoryService {

class CancelSchemaExtensionRequest;

class CancelSchemaExtensionRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    CancelSchemaExtensionRequestPrivate(const DirectoryServiceRequest::Action action,
                                   CancelSchemaExtensionRequest * const q);
    CancelSchemaExtensionRequestPrivate(const CancelSchemaExtensionRequestPrivate &other,
                                   CancelSchemaExtensionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelSchemaExtensionRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
