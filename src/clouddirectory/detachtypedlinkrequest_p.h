// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHTYPEDLINKREQUEST_P_H
#define QTAWS_DETACHTYPEDLINKREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "detachtypedlinkrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DetachTypedLinkRequest;

class DetachTypedLinkRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    DetachTypedLinkRequestPrivate(const CloudDirectoryRequest::Action action,
                                   DetachTypedLinkRequest * const q);
    DetachTypedLinkRequestPrivate(const DetachTypedLinkRequestPrivate &other,
                                   DetachTypedLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachTypedLinkRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
