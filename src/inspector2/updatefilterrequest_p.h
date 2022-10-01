// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFILTERREQUEST_P_H
#define QTAWS_UPDATEFILTERREQUEST_P_H

#include "inspector2request_p.h"
#include "updatefilterrequest.h"

namespace QtAws {
namespace Inspector2 {

class UpdateFilterRequest;

class UpdateFilterRequestPrivate : public Inspector2RequestPrivate {

public:
    UpdateFilterRequestPrivate(const Inspector2Request::Action action,
                                   UpdateFilterRequest * const q);
    UpdateFilterRequestPrivate(const UpdateFilterRequestPrivate &other,
                                   UpdateFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFilterRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
