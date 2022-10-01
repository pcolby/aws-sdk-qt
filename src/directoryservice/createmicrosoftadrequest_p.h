// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMICROSOFTADREQUEST_P_H
#define QTAWS_CREATEMICROSOFTADREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "createmicrosoftadrequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateMicrosoftADRequest;

class CreateMicrosoftADRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    CreateMicrosoftADRequestPrivate(const DirectoryServiceRequest::Action action,
                                   CreateMicrosoftADRequest * const q);
    CreateMicrosoftADRequestPrivate(const CreateMicrosoftADRequestPrivate &other,
                                   CreateMicrosoftADRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMicrosoftADRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
