// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREVEALCONFIGURATIONREQUEST_P_H
#define QTAWS_GETREVEALCONFIGURATIONREQUEST_P_H

#include "macie2request_p.h"
#include "getrevealconfigurationrequest.h"

namespace QtAws {
namespace Macie2 {

class GetRevealConfigurationRequest;

class GetRevealConfigurationRequestPrivate : public Macie2RequestPrivate {

public:
    GetRevealConfigurationRequestPrivate(const Macie2Request::Action action,
                                   GetRevealConfigurationRequest * const q);
    GetRevealConfigurationRequestPrivate(const GetRevealConfigurationRequestPrivate &other,
                                   GetRevealConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRevealConfigurationRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
