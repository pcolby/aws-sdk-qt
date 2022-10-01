// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUPPORTEDRESOURCETYPESREQUEST_P_H
#define QTAWS_GETSUPPORTEDRESOURCETYPESREQUEST_P_H

#include "backuprequest_p.h"
#include "getsupportedresourcetypesrequest.h"

namespace QtAws {
namespace Backup {

class GetSupportedResourceTypesRequest;

class GetSupportedResourceTypesRequestPrivate : public BackupRequestPrivate {

public:
    GetSupportedResourceTypesRequestPrivate(const BackupRequest::Action action,
                                   GetSupportedResourceTypesRequest * const q);
    GetSupportedResourceTypesRequestPrivate(const GetSupportedResourceTypesRequestPrivate &other,
                                   GetSupportedResourceTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSupportedResourceTypesRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
