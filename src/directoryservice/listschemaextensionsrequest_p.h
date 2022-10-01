// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEMAEXTENSIONSREQUEST_P_H
#define QTAWS_LISTSCHEMAEXTENSIONSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "listschemaextensionsrequest.h"

namespace QtAws {
namespace DirectoryService {

class ListSchemaExtensionsRequest;

class ListSchemaExtensionsRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    ListSchemaExtensionsRequestPrivate(const DirectoryServiceRequest::Action action,
                                   ListSchemaExtensionsRequest * const q);
    ListSchemaExtensionsRequestPrivate(const ListSchemaExtensionsRequestPrivate &other,
                                   ListSchemaExtensionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSchemaExtensionsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
