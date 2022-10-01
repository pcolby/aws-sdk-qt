// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREVEALCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEREVEALCONFIGURATIONREQUEST_P_H

#include "macie2request_p.h"
#include "updaterevealconfigurationrequest.h"

namespace QtAws {
namespace Macie2 {

class UpdateRevealConfigurationRequest;

class UpdateRevealConfigurationRequestPrivate : public Macie2RequestPrivate {

public:
    UpdateRevealConfigurationRequestPrivate(const Macie2Request::Action action,
                                   UpdateRevealConfigurationRequest * const q);
    UpdateRevealConfigurationRequestPrivate(const UpdateRevealConfigurationRequestPrivate &other,
                                   UpdateRevealConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRevealConfigurationRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
