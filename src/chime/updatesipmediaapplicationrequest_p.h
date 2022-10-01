// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIPMEDIAAPPLICATIONREQUEST_P_H
#define QTAWS_UPDATESIPMEDIAAPPLICATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "updatesipmediaapplicationrequest.h"

namespace QtAws {
namespace Chime {

class UpdateSipMediaApplicationRequest;

class UpdateSipMediaApplicationRequestPrivate : public ChimeRequestPrivate {

public:
    UpdateSipMediaApplicationRequestPrivate(const ChimeRequest::Action action,
                                   UpdateSipMediaApplicationRequest * const q);
    UpdateSipMediaApplicationRequestPrivate(const UpdateSipMediaApplicationRequestPrivate &other,
                                   UpdateSipMediaApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSipMediaApplicationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
