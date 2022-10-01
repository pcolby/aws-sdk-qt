// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHOBJECTREQUEST_P_H
#define QTAWS_DETACHOBJECTREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "detachobjectrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DetachObjectRequest;

class DetachObjectRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    DetachObjectRequestPrivate(const CloudDirectoryRequest::Action action,
                                   DetachObjectRequest * const q);
    DetachObjectRequestPrivate(const DetachObjectRequestPrivate &other,
                                   DetachObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachObjectRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
