// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONCONFIGURATIONSREQUEST_H
#define QTAWS_LISTDISTRIBUTIONCONFIGURATIONSREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListDistributionConfigurationsRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT ListDistributionConfigurationsRequest : public ImageBuilderRequest {

public:
    ListDistributionConfigurationsRequest(const ListDistributionConfigurationsRequest &other);
    ListDistributionConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDistributionConfigurationsRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
