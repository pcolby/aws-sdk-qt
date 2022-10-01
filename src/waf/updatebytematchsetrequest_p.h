// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBYTEMATCHSETREQUEST_P_H
#define QTAWS_UPDATEBYTEMATCHSETREQUEST_P_H

#include "wafrequest_p.h"
#include "updatebytematchsetrequest.h"

namespace QtAws {
namespace Waf {

class UpdateByteMatchSetRequest;

class UpdateByteMatchSetRequestPrivate : public WafRequestPrivate {

public:
    UpdateByteMatchSetRequestPrivate(const WafRequest::Action action,
                                   UpdateByteMatchSetRequest * const q);
    UpdateByteMatchSetRequestPrivate(const UpdateByteMatchSetRequestPrivate &other,
                                   UpdateByteMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateByteMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
