// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONCONFIGURATIONREQUEST_P_H
#define QTAWS_GETDISTRIBUTIONCONFIGURATIONREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "getdistributionconfigurationrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetDistributionConfigurationRequest;

class GetDistributionConfigurationRequestPrivate : public ImageBuilderRequestPrivate {

public:
    GetDistributionConfigurationRequestPrivate(const ImageBuilderRequest::Action action,
                                   GetDistributionConfigurationRequest * const q);
    GetDistributionConfigurationRequestPrivate(const GetDistributionConfigurationRequestPrivate &other,
                                   GetDistributionConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDistributionConfigurationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
