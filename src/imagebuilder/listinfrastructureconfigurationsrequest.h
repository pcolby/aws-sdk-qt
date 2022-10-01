// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFRASTRUCTURECONFIGURATIONSREQUEST_H
#define QTAWS_LISTINFRASTRUCTURECONFIGURATIONSREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListInfrastructureConfigurationsRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT ListInfrastructureConfigurationsRequest : public ImageBuilderRequest {

public:
    ListInfrastructureConfigurationsRequest(const ListInfrastructureConfigurationsRequest &other);
    ListInfrastructureConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInfrastructureConfigurationsRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
