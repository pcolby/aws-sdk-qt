// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTEREVENTTOPICREQUEST_P_H
#define QTAWS_REGISTEREVENTTOPICREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "registereventtopicrequest.h"

namespace QtAws {
namespace DirectoryService {

class RegisterEventTopicRequest;

class RegisterEventTopicRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    RegisterEventTopicRequestPrivate(const DirectoryServiceRequest::Action action,
                                   RegisterEventTopicRequest * const q);
    RegisterEventTopicRequestPrivate(const RegisterEventTopicRequestPrivate &other,
                                   RegisterEventTopicRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterEventTopicRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
