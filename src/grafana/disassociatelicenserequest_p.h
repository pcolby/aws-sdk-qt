// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELICENSEREQUEST_P_H
#define QTAWS_DISASSOCIATELICENSEREQUEST_P_H

#include "grafanarequest_p.h"
#include "disassociatelicenserequest.h"

namespace QtAws {
namespace Grafana {

class DisassociateLicenseRequest;

class DisassociateLicenseRequestPrivate : public GrafanaRequestPrivate {

public:
    DisassociateLicenseRequestPrivate(const GrafanaRequest::Action action,
                                   DisassociateLicenseRequest * const q);
    DisassociateLicenseRequestPrivate(const DisassociateLicenseRequestPrivate &other,
                                   DisassociateLicenseRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateLicenseRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
