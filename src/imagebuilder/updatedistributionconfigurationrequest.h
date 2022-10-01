// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISTRIBUTIONCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEDISTRIBUTIONCONFIGURATIONREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class UpdateDistributionConfigurationRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT UpdateDistributionConfigurationRequest : public ImageBuilderRequest {

public:
    UpdateDistributionConfigurationRequest(const UpdateDistributionConfigurationRequest &other);
    UpdateDistributionConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDistributionConfigurationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
