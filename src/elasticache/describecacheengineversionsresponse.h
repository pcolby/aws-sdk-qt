/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_DESCRIBECACHEENGINEVERSIONSRESPONSE_H
#define QTAWS_DESCRIBECACHEENGINEVERSIONSRESPONSE_H

#include "elasticacheresponse.h"
#include "describecacheengineversionsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheEngineVersionsResponsePrivate;

class QTAWS_EXPORT DescribeCacheEngineVersionsResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DescribeCacheEngineVersionsResponse(const DescribeCacheEngineVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCacheEngineVersionsRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(DescribeCacheEngineVersionsResponse)
    Q_DISABLE_COPY(DescribeCacheEngineVersionsResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
