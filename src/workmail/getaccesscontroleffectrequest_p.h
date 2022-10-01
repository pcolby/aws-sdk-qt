// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSCONTROLEFFECTREQUEST_P_H
#define QTAWS_GETACCESSCONTROLEFFECTREQUEST_P_H

#include "workmailrequest_p.h"
#include "getaccesscontroleffectrequest.h"

namespace QtAws {
namespace WorkMail {

class GetAccessControlEffectRequest;

class GetAccessControlEffectRequestPrivate : public WorkMailRequestPrivate {

public:
    GetAccessControlEffectRequestPrivate(const WorkMailRequest::Action action,
                                   GetAccessControlEffectRequest * const q);
    GetAccessControlEffectRequestPrivate(const GetAccessControlEffectRequestPrivate &other,
                                   GetAccessControlEffectRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccessControlEffectRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
