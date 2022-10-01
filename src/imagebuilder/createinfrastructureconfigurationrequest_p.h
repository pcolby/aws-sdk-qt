// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINFRASTRUCTURECONFIGURATIONREQUEST_P_H
#define QTAWS_CREATEINFRASTRUCTURECONFIGURATIONREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "createinfrastructureconfigurationrequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateInfrastructureConfigurationRequest;

class CreateInfrastructureConfigurationRequestPrivate : public ImageBuilderRequestPrivate {

public:
    CreateInfrastructureConfigurationRequestPrivate(const ImageBuilderRequest::Action action,
                                   CreateInfrastructureConfigurationRequest * const q);
    CreateInfrastructureConfigurationRequestPrivate(const CreateInfrastructureConfigurationRequestPrivate &other,
                                   CreateInfrastructureConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInfrastructureConfigurationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
