// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINFRASTRUCTURECONFIGURATIONREQUEST_H
#define QTAWS_CREATEINFRASTRUCTURECONFIGURATIONREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateInfrastructureConfigurationRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT CreateInfrastructureConfigurationRequest : public ImageBuilderRequest {

public:
    CreateInfrastructureConfigurationRequest(const CreateInfrastructureConfigurationRequest &other);
    CreateInfrastructureConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInfrastructureConfigurationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
