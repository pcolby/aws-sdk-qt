// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNDEPRECATEACTIVITYTYPEREQUEST_P_H
#define QTAWS_UNDEPRECATEACTIVITYTYPEREQUEST_P_H

#include "swfrequest_p.h"
#include "undeprecateactivitytyperequest.h"

namespace QtAws {
namespace Swf {

class UndeprecateActivityTypeRequest;

class UndeprecateActivityTypeRequestPrivate : public SwfRequestPrivate {

public:
    UndeprecateActivityTypeRequestPrivate(const SwfRequest::Action action,
                                   UndeprecateActivityTypeRequest * const q);
    UndeprecateActivityTypeRequestPrivate(const UndeprecateActivityTypeRequestPrivate &other,
                                   UndeprecateActivityTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UndeprecateActivityTypeRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
