// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEDIRECTORYREQUEST_P_H
#define QTAWS_ENABLEDIRECTORYREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "enabledirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class EnableDirectoryRequest;

class EnableDirectoryRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    EnableDirectoryRequestPrivate(const CloudDirectoryRequest::Action action,
                                   EnableDirectoryRequest * const q);
    EnableDirectoryRequestPrivate(const EnableDirectoryRequestPrivate &other,
                                   EnableDirectoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableDirectoryRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
