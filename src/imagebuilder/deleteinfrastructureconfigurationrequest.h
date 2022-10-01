// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINFRASTRUCTURECONFIGURATIONREQUEST_H
#define QTAWS_DELETEINFRASTRUCTURECONFIGURATIONREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteInfrastructureConfigurationRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT DeleteInfrastructureConfigurationRequest : public ImageBuilderRequest {

public:
    DeleteInfrastructureConfigurationRequest(const DeleteInfrastructureConfigurationRequest &other);
    DeleteInfrastructureConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInfrastructureConfigurationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
