// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISTRIBUTIONCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEDISTRIBUTIONCONFIGURATIONREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "deletedistributionconfigurationrequest.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteDistributionConfigurationRequest;

class DeleteDistributionConfigurationRequestPrivate : public ImageBuilderRequestPrivate {

public:
    DeleteDistributionConfigurationRequestPrivate(const ImageBuilderRequest::Action action,
                                   DeleteDistributionConfigurationRequest * const q);
    DeleteDistributionConfigurationRequestPrivate(const DeleteDistributionConfigurationRequestPrivate &other,
                                   DeleteDistributionConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDistributionConfigurationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
