// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHOBJECTREQUEST_P_H
#define QTAWS_ATTACHOBJECTREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "attachobjectrequest.h"

namespace QtAws {
namespace CloudDirectory {

class AttachObjectRequest;

class AttachObjectRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    AttachObjectRequestPrivate(const CloudDirectoryRequest::Action action,
                                   AttachObjectRequest * const q);
    AttachObjectRequestPrivate(const AttachObjectRequestPrivate &other,
                                   AttachObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachObjectRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
