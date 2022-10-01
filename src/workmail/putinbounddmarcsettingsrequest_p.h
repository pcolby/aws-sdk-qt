// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINBOUNDDMARCSETTINGSREQUEST_P_H
#define QTAWS_PUTINBOUNDDMARCSETTINGSREQUEST_P_H

#include "workmailrequest_p.h"
#include "putinbounddmarcsettingsrequest.h"

namespace QtAws {
namespace WorkMail {

class PutInboundDmarcSettingsRequest;

class PutInboundDmarcSettingsRequestPrivate : public WorkMailRequestPrivate {

public:
    PutInboundDmarcSettingsRequestPrivate(const WorkMailRequest::Action action,
                                   PutInboundDmarcSettingsRequest * const q);
    PutInboundDmarcSettingsRequestPrivate(const PutInboundDmarcSettingsRequestPrivate &other,
                                   PutInboundDmarcSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutInboundDmarcSettingsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
