// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALLOWEDNODETYPEMODIFICATIONSRESPONSE_P_H
#define QTAWS_LISTALLOWEDNODETYPEMODIFICATIONSRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class ListAllowedNodeTypeModificationsResponse;

class ListAllowedNodeTypeModificationsResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit ListAllowedNodeTypeModificationsResponsePrivate(ListAllowedNodeTypeModificationsResponse * const q);

    void parseListAllowedNodeTypeModificationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAllowedNodeTypeModificationsResponse)
    Q_DISABLE_COPY(ListAllowedNodeTypeModificationsResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
