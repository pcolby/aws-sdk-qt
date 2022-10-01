// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSPUBLICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_GETFINDINGSPUBLICATIONCONFIGURATIONREQUEST_P_H

#include "macie2request_p.h"
#include "getfindingspublicationconfigurationrequest.h"

namespace QtAws {
namespace Macie2 {

class GetFindingsPublicationConfigurationRequest;

class GetFindingsPublicationConfigurationRequestPrivate : public Macie2RequestPrivate {

public:
    GetFindingsPublicationConfigurationRequestPrivate(const Macie2Request::Action action,
                                   GetFindingsPublicationConfigurationRequest * const q);
    GetFindingsPublicationConfigurationRequestPrivate(const GetFindingsPublicationConfigurationRequestPrivate &other,
                                   GetFindingsPublicationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFindingsPublicationConfigurationRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
