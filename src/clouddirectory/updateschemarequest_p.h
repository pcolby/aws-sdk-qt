// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEMAREQUEST_P_H
#define QTAWS_UPDATESCHEMAREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "updateschemarequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateSchemaRequest;

class UpdateSchemaRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    UpdateSchemaRequestPrivate(const CloudDirectoryRequest::Action action,
                                   UpdateSchemaRequest * const q);
    UpdateSchemaRequestPrivate(const UpdateSchemaRequestPrivate &other,
                                   UpdateSchemaRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSchemaRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
