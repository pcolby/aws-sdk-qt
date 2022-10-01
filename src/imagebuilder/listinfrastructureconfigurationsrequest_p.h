// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFRASTRUCTURECONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTINFRASTRUCTURECONFIGURATIONSREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "listinfrastructureconfigurationsrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListInfrastructureConfigurationsRequest;

class ListInfrastructureConfigurationsRequestPrivate : public ImageBuilderRequestPrivate {

public:
    ListInfrastructureConfigurationsRequestPrivate(const ImageBuilderRequest::Action action,
                                   ListInfrastructureConfigurationsRequest * const q);
    ListInfrastructureConfigurationsRequestPrivate(const ListInfrastructureConfigurationsRequestPrivate &other,
                                   ListInfrastructureConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInfrastructureConfigurationsRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
