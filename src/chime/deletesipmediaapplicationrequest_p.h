// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIPMEDIAAPPLICATIONREQUEST_P_H
#define QTAWS_DELETESIPMEDIAAPPLICATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "deletesipmediaapplicationrequest.h"

namespace QtAws {
namespace Chime {

class DeleteSipMediaApplicationRequest;

class DeleteSipMediaApplicationRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteSipMediaApplicationRequestPrivate(const ChimeRequest::Action action,
                                   DeleteSipMediaApplicationRequest * const q);
    DeleteSipMediaApplicationRequestPrivate(const DeleteSipMediaApplicationRequestPrivate &other,
                                   DeleteSipMediaApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSipMediaApplicationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
