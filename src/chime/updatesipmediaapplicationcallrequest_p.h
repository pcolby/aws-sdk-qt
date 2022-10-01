// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIPMEDIAAPPLICATIONCALLREQUEST_P_H
#define QTAWS_UPDATESIPMEDIAAPPLICATIONCALLREQUEST_P_H

#include "chimerequest_p.h"
#include "updatesipmediaapplicationcallrequest.h"

namespace QtAws {
namespace Chime {

class UpdateSipMediaApplicationCallRequest;

class UpdateSipMediaApplicationCallRequestPrivate : public ChimeRequestPrivate {

public:
    UpdateSipMediaApplicationCallRequestPrivate(const ChimeRequest::Action action,
                                   UpdateSipMediaApplicationCallRequest * const q);
    UpdateSipMediaApplicationCallRequestPrivate(const UpdateSipMediaApplicationCallRequestPrivate &other,
                                   UpdateSipMediaApplicationCallRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSipMediaApplicationCallRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
