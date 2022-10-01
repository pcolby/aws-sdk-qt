// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIPMEDIAAPPLICATIONCALLREQUEST_P_H
#define QTAWS_CREATESIPMEDIAAPPLICATIONCALLREQUEST_P_H

#include "chimerequest_p.h"
#include "createsipmediaapplicationcallrequest.h"

namespace QtAws {
namespace Chime {

class CreateSipMediaApplicationCallRequest;

class CreateSipMediaApplicationCallRequestPrivate : public ChimeRequestPrivate {

public:
    CreateSipMediaApplicationCallRequestPrivate(const ChimeRequest::Action action,
                                   CreateSipMediaApplicationCallRequest * const q);
    CreateSipMediaApplicationCallRequestPrivate(const CreateSipMediaApplicationCallRequestPrivate &other,
                                   CreateSipMediaApplicationCallRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSipMediaApplicationCallRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
