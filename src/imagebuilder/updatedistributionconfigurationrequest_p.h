// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISTRIBUTIONCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEDISTRIBUTIONCONFIGURATIONREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "updatedistributionconfigurationrequest.h"

namespace QtAws {
namespace ImageBuilder {

class UpdateDistributionConfigurationRequest;

class UpdateDistributionConfigurationRequestPrivate : public ImageBuilderRequestPrivate {

public:
    UpdateDistributionConfigurationRequestPrivate(const ImageBuilderRequest::Action action,
                                   UpdateDistributionConfigurationRequest * const q);
    UpdateDistributionConfigurationRequestPrivate(const UpdateDistributionConfigurationRequestPrivate &other,
                                   UpdateDistributionConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDistributionConfigurationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
