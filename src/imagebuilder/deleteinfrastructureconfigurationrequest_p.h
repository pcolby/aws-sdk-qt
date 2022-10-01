// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINFRASTRUCTURECONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEINFRASTRUCTURECONFIGURATIONREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "deleteinfrastructureconfigurationrequest.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteInfrastructureConfigurationRequest;

class DeleteInfrastructureConfigurationRequestPrivate : public ImageBuilderRequestPrivate {

public:
    DeleteInfrastructureConfigurationRequestPrivate(const ImageBuilderRequest::Action action,
                                   DeleteInfrastructureConfigurationRequest * const q);
    DeleteInfrastructureConfigurationRequestPrivate(const DeleteInfrastructureConfigurationRequestPrivate &other,
                                   DeleteInfrastructureConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInfrastructureConfigurationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
