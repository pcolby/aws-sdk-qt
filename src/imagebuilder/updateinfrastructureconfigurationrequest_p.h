// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINFRASTRUCTURECONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEINFRASTRUCTURECONFIGURATIONREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "updateinfrastructureconfigurationrequest.h"

namespace QtAws {
namespace ImageBuilder {

class UpdateInfrastructureConfigurationRequest;

class UpdateInfrastructureConfigurationRequestPrivate : public ImageBuilderRequestPrivate {

public:
    UpdateInfrastructureConfigurationRequestPrivate(const ImageBuilderRequest::Action action,
                                   UpdateInfrastructureConfigurationRequest * const q);
    UpdateInfrastructureConfigurationRequestPrivate(const UpdateInfrastructureConfigurationRequestPrivate &other,
                                   UpdateInfrastructureConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateInfrastructureConfigurationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
