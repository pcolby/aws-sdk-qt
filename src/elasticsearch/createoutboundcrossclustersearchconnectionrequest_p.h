/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CREATEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_P_H
#define QTAWS_CREATEOUTBOUNDCROSSCLUSTERSEARCHCONNECTIONREQUEST_P_H

#include "elasticsearchrequest_p.h"
#include "createoutboundcrossclustersearchconnectionrequest.h"

namespace QtAws {
namespace Elasticsearch {

class CreateOutboundCrossClusterSearchConnectionRequest;

class CreateOutboundCrossClusterSearchConnectionRequestPrivate : public ElasticsearchRequestPrivate {

public:
    CreateOutboundCrossClusterSearchConnectionRequestPrivate(const ElasticsearchRequest::Action action,
                                   CreateOutboundCrossClusterSearchConnectionRequest * const q);
    CreateOutboundCrossClusterSearchConnectionRequestPrivate(const CreateOutboundCrossClusterSearchConnectionRequestPrivate &other,
                                   CreateOutboundCrossClusterSearchConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOutboundCrossClusterSearchConnectionRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
