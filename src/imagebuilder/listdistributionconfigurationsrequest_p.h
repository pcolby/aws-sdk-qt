// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTDISTRIBUTIONCONFIGURATIONSREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "listdistributionconfigurationsrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListDistributionConfigurationsRequest;

class ListDistributionConfigurationsRequestPrivate : public ImageBuilderRequestPrivate {

public:
    ListDistributionConfigurationsRequestPrivate(const ImageBuilderRequest::Action action,
                                   ListDistributionConfigurationsRequest * const q);
    ListDistributionConfigurationsRequestPrivate(const ListDistributionConfigurationsRequestPrivate &other,
                                   ListDistributionConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDistributionConfigurationsRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
