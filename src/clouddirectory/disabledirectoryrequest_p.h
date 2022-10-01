// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEDIRECTORYREQUEST_P_H
#define QTAWS_DISABLEDIRECTORYREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "disabledirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DisableDirectoryRequest;

class DisableDirectoryRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    DisableDirectoryRequestPrivate(const CloudDirectoryRequest::Action action,
                                   DisableDirectoryRequest * const q);
    DisableDirectoryRequestPrivate(const DisableDirectoryRequestPrivate &other,
                                   DisableDirectoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableDirectoryRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
