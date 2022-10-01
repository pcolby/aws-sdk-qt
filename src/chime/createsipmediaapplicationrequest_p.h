// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIPMEDIAAPPLICATIONREQUEST_P_H
#define QTAWS_CREATESIPMEDIAAPPLICATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "createsipmediaapplicationrequest.h"

namespace QtAws {
namespace Chime {

class CreateSipMediaApplicationRequest;

class CreateSipMediaApplicationRequestPrivate : public ChimeRequestPrivate {

public:
    CreateSipMediaApplicationRequestPrivate(const ChimeRequest::Action action,
                                   CreateSipMediaApplicationRequest * const q);
    CreateSipMediaApplicationRequestPrivate(const CreateSipMediaApplicationRequestPrivate &other,
                                   CreateSipMediaApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSipMediaApplicationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
