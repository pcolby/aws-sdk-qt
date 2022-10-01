// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONCONFIGURATIONREQUEST_H
#define QTAWS_GETDISTRIBUTIONCONFIGURATIONREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetDistributionConfigurationRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT GetDistributionConfigurationRequest : public ImageBuilderRequest {

public:
    GetDistributionConfigurationRequest(const GetDistributionConfigurationRequest &other);
    GetDistributionConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDistributionConfigurationRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
