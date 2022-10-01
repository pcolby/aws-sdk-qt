// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFINDINGSPUBLICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTFINDINGSPUBLICATIONCONFIGURATIONREQUEST_P_H

#include "macie2request_p.h"
#include "putfindingspublicationconfigurationrequest.h"

namespace QtAws {
namespace Macie2 {

class PutFindingsPublicationConfigurationRequest;

class PutFindingsPublicationConfigurationRequestPrivate : public Macie2RequestPrivate {

public:
    PutFindingsPublicationConfigurationRequestPrivate(const Macie2Request::Action action,
                                   PutFindingsPublicationConfigurationRequest * const q);
    PutFindingsPublicationConfigurationRequestPrivate(const PutFindingsPublicationConfigurationRequestPrivate &other,
                                   PutFindingsPublicationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutFindingsPublicationConfigurationRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
