// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIPRULEREQUEST_P_H
#define QTAWS_UPDATESIPRULEREQUEST_P_H

#include "chimerequest_p.h"
#include "updatesiprulerequest.h"

namespace QtAws {
namespace Chime {

class UpdateSipRuleRequest;

class UpdateSipRuleRequestPrivate : public ChimeRequestPrivate {

public:
    UpdateSipRuleRequestPrivate(const ChimeRequest::Action action,
                                   UpdateSipRuleRequest * const q);
    UpdateSipRuleRequestPrivate(const UpdateSipRuleRequestPrivate &other,
                                   UpdateSipRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSipRuleRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
