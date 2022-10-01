// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELICENSEREQUEST_P_H
#define QTAWS_ASSOCIATELICENSEREQUEST_P_H

#include "grafanarequest_p.h"
#include "associatelicenserequest.h"

namespace QtAws {
namespace Grafana {

class AssociateLicenseRequest;

class AssociateLicenseRequestPrivate : public GrafanaRequestPrivate {

public:
    AssociateLicenseRequestPrivate(const GrafanaRequest::Action action,
                                   AssociateLicenseRequest * const q);
    AssociateLicenseRequestPrivate(const AssociateLicenseRequestPrivate &other,
                                   AssociateLicenseRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateLicenseRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
