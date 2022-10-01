// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIRECTORYREQUEST_P_H
#define QTAWS_GETDIRECTORYREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "getdirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetDirectoryRequest;

class GetDirectoryRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    GetDirectoryRequestPrivate(const CloudDirectoryRequest::Action action,
                                   GetDirectoryRequest * const q);
    GetDirectoryRequestPrivate(const GetDirectoryRequestPrivate &other,
                                   GetDirectoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDirectoryRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
