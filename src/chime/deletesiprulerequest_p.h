// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIPRULEREQUEST_P_H
#define QTAWS_DELETESIPRULEREQUEST_P_H

#include "chimerequest_p.h"
#include "deletesiprulerequest.h"

namespace QtAws {
namespace Chime {

class DeleteSipRuleRequest;

class DeleteSipRuleRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteSipRuleRequestPrivate(const ChimeRequest::Action action,
                                   DeleteSipRuleRequest * const q);
    DeleteSipRuleRequestPrivate(const DeleteSipRuleRequestPrivate &other,
                                   DeleteSipRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSipRuleRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
