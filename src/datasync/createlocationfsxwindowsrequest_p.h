// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONFSXWINDOWSREQUEST_P_H
#define QTAWS_CREATELOCATIONFSXWINDOWSREQUEST_P_H

#include "datasyncrequest_p.h"
#include "createlocationfsxwindowsrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationFsxWindowsRequest;

class CreateLocationFsxWindowsRequestPrivate : public DataSyncRequestPrivate {

public:
    CreateLocationFsxWindowsRequestPrivate(const DataSyncRequest::Action action,
                                   CreateLocationFsxWindowsRequest * const q);
    CreateLocationFsxWindowsRequestPrivate(const CreateLocationFsxWindowsRequestPrivate &other,
                                   CreateLocationFsxWindowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLocationFsxWindowsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
