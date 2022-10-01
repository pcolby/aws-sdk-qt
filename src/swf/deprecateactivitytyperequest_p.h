// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATEACTIVITYTYPEREQUEST_P_H
#define QTAWS_DEPRECATEACTIVITYTYPEREQUEST_P_H

#include "swfrequest_p.h"
#include "deprecateactivitytyperequest.h"

namespace QtAws {
namespace Swf {

class DeprecateActivityTypeRequest;

class DeprecateActivityTypeRequestPrivate : public SwfRequestPrivate {

public:
    DeprecateActivityTypeRequestPrivate(const SwfRequest::Action action,
                                   DeprecateActivityTypeRequest * const q);
    DeprecateActivityTypeRequestPrivate(const DeprecateActivityTypeRequestPrivate &other,
                                   DeprecateActivityTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeprecateActivityTypeRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
