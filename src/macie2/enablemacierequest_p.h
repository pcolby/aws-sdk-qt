// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEMACIEREQUEST_P_H
#define QTAWS_ENABLEMACIEREQUEST_P_H

#include "macie2request_p.h"
#include "enablemacierequest.h"

namespace QtAws {
namespace Macie2 {

class EnableMacieRequest;

class EnableMacieRequestPrivate : public Macie2RequestPrivate {

public:
    EnableMacieRequestPrivate(const Macie2Request::Action action,
                                   EnableMacieRequest * const q);
    EnableMacieRequestPrivate(const EnableMacieRequestPrivate &other,
                                   EnableMacieRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableMacieRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
