// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILTERREQUEST_P_H
#define QTAWS_CREATEFILTERREQUEST_P_H

#include "personalizerequest_p.h"
#include "createfilterrequest.h"

namespace QtAws {
namespace Personalize {

class CreateFilterRequest;

class CreateFilterRequestPrivate : public PersonalizeRequestPrivate {

public:
    CreateFilterRequestPrivate(const PersonalizeRequest::Action action,
                                   CreateFilterRequest * const q);
    CreateFilterRequestPrivate(const CreateFilterRequestPrivate &other,
                                   CreateFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFilterRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
