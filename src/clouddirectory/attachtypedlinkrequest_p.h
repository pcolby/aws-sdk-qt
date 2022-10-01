// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHTYPEDLINKREQUEST_P_H
#define QTAWS_ATTACHTYPEDLINKREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "attachtypedlinkrequest.h"

namespace QtAws {
namespace CloudDirectory {

class AttachTypedLinkRequest;

class AttachTypedLinkRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    AttachTypedLinkRequestPrivate(const CloudDirectoryRequest::Action action,
                                   AttachTypedLinkRequest * const q);
    AttachTypedLinkRequestPrivate(const AttachTypedLinkRequestPrivate &other,
                                   AttachTypedLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachTypedLinkRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
