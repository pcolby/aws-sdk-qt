// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINFRASTRUCTURECONFIGURATIONREQUEST_H
#define QTAWS_UPDATEINFRASTRUCTURECONFIGURATIONREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class UpdateInfrastructureConfigurationRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT UpdateInfrastructureConfigurationRequest : public ImageBuilderRequest {

public:
    UpdateInfrastructureConfigurationRequest(const UpdateInfrastructureConfigurationRequest &other);
    UpdateInfrastructureConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInfrastructureConfigurationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
