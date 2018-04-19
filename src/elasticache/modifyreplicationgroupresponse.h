/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MODIFYREPLICATIONGROUPRESPONSE_H
#define QTAWS_MODIFYREPLICATIONGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "modifyreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyReplicationGroupResponsePrivate;

class QTAWS_EXPORT ModifyReplicationGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    ModifyReplicationGroupResponse(const ModifyReplicationGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyReplicationGroupRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(ModifyReplicationGroupResponse)
    Q_DISABLE_COPY(ModifyReplicationGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
