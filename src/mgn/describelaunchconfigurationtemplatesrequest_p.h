// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAUNCHCONFIGURATIONTEMPLATESREQUEST_P_H
#define QTAWS_DESCRIBELAUNCHCONFIGURATIONTEMPLATESREQUEST_P_H

#include "mgnrequest_p.h"
#include "describelaunchconfigurationtemplatesrequest.h"

namespace QtAws {
namespace Mgn {

class DescribeLaunchConfigurationTemplatesRequest;

class DescribeLaunchConfigurationTemplatesRequestPrivate : public MgnRequestPrivate {

public:
    DescribeLaunchConfigurationTemplatesRequestPrivate(const MgnRequest::Action action,
                                   DescribeLaunchConfigurationTemplatesRequest * const q);
    DescribeLaunchConfigurationTemplatesRequestPrivate(const DescribeLaunchConfigurationTemplatesRequestPrivate &other,
                                   DescribeLaunchConfigurationTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLaunchConfigurationTemplatesRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
