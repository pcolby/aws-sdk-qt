// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINFRASTRUCTURECONFIGURATIONREQUEST_P_H
#define QTAWS_GETINFRASTRUCTURECONFIGURATIONREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "getinfrastructureconfigurationrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetInfrastructureConfigurationRequest;

class GetInfrastructureConfigurationRequestPrivate : public ImageBuilderRequestPrivate {

public:
    GetInfrastructureConfigurationRequestPrivate(const ImageBuilderRequest::Action action,
                                   GetInfrastructureConfigurationRequest * const q);
    GetInfrastructureConfigurationRequestPrivate(const GetInfrastructureConfigurationRequestPrivate &other,
                                   GetInfrastructureConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInfrastructureConfigurationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
