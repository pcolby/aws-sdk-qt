// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBYTEMATCHSETREQUEST_P_H
#define QTAWS_DELETEBYTEMATCHSETREQUEST_P_H

#include "wafrequest_p.h"
#include "deletebytematchsetrequest.h"

namespace QtAws {
namespace Waf {

class DeleteByteMatchSetRequest;

class DeleteByteMatchSetRequestPrivate : public WafRequestPrivate {

public:
    DeleteByteMatchSetRequestPrivate(const WafRequest::Action action,
                                   DeleteByteMatchSetRequest * const q);
    DeleteByteMatchSetRequestPrivate(const DeleteByteMatchSetRequestPrivate &other,
                                   DeleteByteMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteByteMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
