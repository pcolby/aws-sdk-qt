// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOBJECTREQUEST_P_H
#define QTAWS_CREATEOBJECTREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "createobjectrequest.h"

namespace QtAws {
namespace CloudDirectory {

class CreateObjectRequest;

class CreateObjectRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    CreateObjectRequestPrivate(const CloudDirectoryRequest::Action action,
                                   CreateObjectRequest * const q);
    CreateObjectRequestPrivate(const CreateObjectRequestPrivate &other,
                                   CreateObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateObjectRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
