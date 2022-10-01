// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISTRIBUTIONCONFIGURATIONREQUEST_H
#define QTAWS_DELETEDISTRIBUTIONCONFIGURATIONREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteDistributionConfigurationRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT DeleteDistributionConfigurationRequest : public ImageBuilderRequest {

public:
    DeleteDistributionConfigurationRequest(const DeleteDistributionConfigurationRequest &other);
    DeleteDistributionConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDistributionConfigurationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
