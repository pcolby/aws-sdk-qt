// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISTRIBUTIONCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATEDISTRIBUTIONCONFIGURATIONREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "createdistributionconfigurationrequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateDistributionConfigurationRequest;

class CreateDistributionConfigurationRequestPrivate : public ImageBuilderRequestPrivate {

public:
    CreateDistributionConfigurationRequestPrivate(const ImageBuilderRequest::Action action,
                                   CreateDistributionConfigurationRequest * const q);
    CreateDistributionConfigurationRequestPrivate(const CreateDistributionConfigurationRequestPrivate &other,
                                   CreateDistributionConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDistributionConfigurationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
