// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINFRASTRUCTURECONFIGURATIONREQUEST_H
#define QTAWS_GETINFRASTRUCTURECONFIGURATIONREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetInfrastructureConfigurationRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT GetInfrastructureConfigurationRequest : public ImageBuilderRequest {

public:
    GetInfrastructureConfigurationRequest(const GetInfrastructureConfigurationRequest &other);
    GetInfrastructureConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInfrastructureConfigurationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
