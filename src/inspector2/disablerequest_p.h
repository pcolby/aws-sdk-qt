// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEREQUEST_P_H
#define QTAWS_DISABLEREQUEST_P_H

#include "inspector2request_p.h"
#include "disablerequest.h"

namespace QtAws {
namespace Inspector2 {

class DisableRequest;

class DisableRequestPrivate : public Inspector2RequestPrivate {

public:
    DisableRequestPrivate(const Inspector2Request::Action action,
                                   DisableRequest * const q);
    DisableRequestPrivate(const DisableRequestPrivate &other,
                                   DisableRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
