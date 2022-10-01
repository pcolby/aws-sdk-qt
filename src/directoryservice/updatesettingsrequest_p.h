// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESETTINGSREQUEST_P_H
#define QTAWS_UPDATESETTINGSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "updatesettingsrequest.h"

namespace QtAws {
namespace DirectoryService {

class UpdateSettingsRequest;

class UpdateSettingsRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    UpdateSettingsRequestPrivate(const DirectoryServiceRequest::Action action,
                                   UpdateSettingsRequest * const q);
    UpdateSettingsRequestPrivate(const UpdateSettingsRequestPrivate &other,
                                   UpdateSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSettingsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
