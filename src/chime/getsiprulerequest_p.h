// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIPRULEREQUEST_P_H
#define QTAWS_GETSIPRULEREQUEST_P_H

#include "chimerequest_p.h"
#include "getsiprulerequest.h"

namespace QtAws {
namespace Chime {

class GetSipRuleRequest;

class GetSipRuleRequestPrivate : public ChimeRequestPrivate {

public:
    GetSipRuleRequestPrivate(const ChimeRequest::Action action,
                                   GetSipRuleRequest * const q);
    GetSipRuleRequestPrivate(const GetSipRuleRequestPrivate &other,
                                   GetSipRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSipRuleRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
