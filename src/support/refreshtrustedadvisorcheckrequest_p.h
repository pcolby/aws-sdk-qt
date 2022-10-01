// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REFRESHTRUSTEDADVISORCHECKREQUEST_P_H
#define QTAWS_REFRESHTRUSTEDADVISORCHECKREQUEST_P_H

#include "supportrequest_p.h"
#include "refreshtrustedadvisorcheckrequest.h"

namespace QtAws {
namespace Support {

class RefreshTrustedAdvisorCheckRequest;

class RefreshTrustedAdvisorCheckRequestPrivate : public SupportRequestPrivate {

public:
    RefreshTrustedAdvisorCheckRequestPrivate(const SupportRequest::Action action,
                                   RefreshTrustedAdvisorCheckRequest * const q);
    RefreshTrustedAdvisorCheckRequestPrivate(const RefreshTrustedAdvisorCheckRequestPrivate &other,
                                   RefreshTrustedAdvisorCheckRequest * const q);

private:
    Q_DECLARE_PUBLIC(RefreshTrustedAdvisorCheckRequest)

};

} // namespace Support
} // namespace QtAws

#endif
