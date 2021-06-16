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

#ifndef QTAWS_GETUPGRADESTATUSRESPONSE_H
#define QTAWS_GETUPGRADESTATUSRESPONSE_H

#include "elasticsearchserviceresponse.h"
#include "getupgradestatusrequest.h"

namespace QtAws {
namespace ElasticsearchService {

class GetUpgradeStatusResponsePrivate;

class QTAWS_EXPORT GetUpgradeStatusResponse : public ElasticsearchServiceResponse {
    Q_OBJECT

public:
    GetUpgradeStatusResponse(const GetUpgradeStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUpgradeStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUpgradeStatusResponse)
    Q_DISABLE_COPY(GetUpgradeStatusResponse)

};

} // namespace ElasticsearchService
} // namespace QtAws

#endif
