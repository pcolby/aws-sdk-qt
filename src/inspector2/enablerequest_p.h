// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEREQUEST_P_H
#define QTAWS_ENABLEREQUEST_P_H

#include "inspector2request_p.h"
#include "enablerequest.h"

namespace QtAws {
namespace Inspector2 {

class EnableRequest;

class EnableRequestPrivate : public Inspector2RequestPrivate {

public:
    EnableRequestPrivate(const Inspector2Request::Action action,
                                   EnableRequest * const q);
    EnableRequestPrivate(const EnableRequestPrivate &other,
                                   EnableRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
