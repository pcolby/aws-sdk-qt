// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILTERREQUEST_P_H
#define QTAWS_CREATEFILTERREQUEST_P_H

#include "inspector2request_p.h"
#include "createfilterrequest.h"

namespace QtAws {
namespace Inspector2 {

class CreateFilterRequest;

class CreateFilterRequestPrivate : public Inspector2RequestPrivate {

public:
    CreateFilterRequestPrivate(const Inspector2Request::Action action,
                                   CreateFilterRequest * const q);
    CreateFilterRequestPrivate(const CreateFilterRequestPrivate &other,
                                   CreateFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFilterRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
