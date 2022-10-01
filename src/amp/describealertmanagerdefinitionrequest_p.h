// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALERTMANAGERDEFINITIONREQUEST_P_H
#define QTAWS_DESCRIBEALERTMANAGERDEFINITIONREQUEST_P_H

#include "amprequest_p.h"
#include "describealertmanagerdefinitionrequest.h"

namespace QtAws {
namespace Amp {

class DescribeAlertManagerDefinitionRequest;

class DescribeAlertManagerDefinitionRequestPrivate : public AmpRequestPrivate {

public:
    DescribeAlertManagerDefinitionRequestPrivate(const AmpRequest::Action action,
                                   DescribeAlertManagerDefinitionRequest * const q);
    DescribeAlertManagerDefinitionRequestPrivate(const DescribeAlertManagerDefinitionRequestPrivate &other,
                                   DescribeAlertManagerDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAlertManagerDefinitionRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
