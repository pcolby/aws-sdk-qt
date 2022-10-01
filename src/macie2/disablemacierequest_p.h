// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEMACIEREQUEST_P_H
#define QTAWS_DISABLEMACIEREQUEST_P_H

#include "macie2request_p.h"
#include "disablemacierequest.h"

namespace QtAws {
namespace Macie2 {

class DisableMacieRequest;

class DisableMacieRequestPrivate : public Macie2RequestPrivate {

public:
    DisableMacieRequestPrivate(const Macie2Request::Action action,
                                   DisableMacieRequest * const q);
    DisableMacieRequestPrivate(const DisableMacieRequestPrivate &other,
                                   DisableMacieRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableMacieRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
