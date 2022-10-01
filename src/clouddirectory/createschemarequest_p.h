// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEMAREQUEST_P_H
#define QTAWS_CREATESCHEMAREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "createschemarequest.h"

namespace QtAws {
namespace CloudDirectory {

class CreateSchemaRequest;

class CreateSchemaRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    CreateSchemaRequestPrivate(const CloudDirectoryRequest::Action action,
                                   CreateSchemaRequest * const q);
    CreateSchemaRequestPrivate(const CreateSchemaRequestPrivate &other,
                                   CreateSchemaRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSchemaRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
