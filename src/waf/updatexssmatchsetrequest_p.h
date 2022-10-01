// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEXSSMATCHSETREQUEST_P_H
#define QTAWS_UPDATEXSSMATCHSETREQUEST_P_H

#include "wafrequest_p.h"
#include "updatexssmatchsetrequest.h"

namespace QtAws {
namespace Waf {

class UpdateXssMatchSetRequest;

class UpdateXssMatchSetRequestPrivate : public WafRequestPrivate {

public:
    UpdateXssMatchSetRequestPrivate(const WafRequest::Action action,
                                   UpdateXssMatchSetRequest * const q);
    UpdateXssMatchSetRequestPrivate(const UpdateXssMatchSetRequestPrivate &other,
                                   UpdateXssMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateXssMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
