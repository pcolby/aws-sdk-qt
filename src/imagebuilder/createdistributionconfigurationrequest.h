// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISTRIBUTIONCONFIGURATIONREQUEST_H
#define QTAWS_CREATEDISTRIBUTIONCONFIGURATIONREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateDistributionConfigurationRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT CreateDistributionConfigurationRequest : public ImageBuilderRequest {

public:
    CreateDistributionConfigurationRequest(const CreateDistributionConfigurationRequest &other);
    CreateDistributionConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDistributionConfigurationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
