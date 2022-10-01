// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIPRULEREQUEST_P_H
#define QTAWS_CREATESIPRULEREQUEST_P_H

#include "chimerequest_p.h"
#include "createsiprulerequest.h"

namespace QtAws {
namespace Chime {

class CreateSipRuleRequest;

class CreateSipRuleRequestPrivate : public ChimeRequestPrivate {

public:
    CreateSipRuleRequestPrivate(const ChimeRequest::Action action,
                                   CreateSipRuleRequest * const q);
    CreateSipRuleRequestPrivate(const CreateSipRuleRequestPrivate &other,
                                   CreateSipRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSipRuleRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
