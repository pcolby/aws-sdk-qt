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

#ifndef QTAWS_RESTOREDBCLUSTERFROMS3RESPONSE_H
#define QTAWS_RESTOREDBCLUSTERFROMS3RESPONSE_H

#include "rdsresponse.h"
#include "restoredbclusterfroms3request.h"

namespace QtAws {
namespace RDS {

class RestoreDBClusterFromS3ResponsePrivate;

class QTAWS_EXPORT RestoreDBClusterFromS3Response : public RdsResponse {
    Q_OBJECT

public:
    RestoreDBClusterFromS3Response(const RestoreDBClusterFromS3Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreDBClusterFromS3Request * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreDBClusterFromS3Response)
    Q_DISABLE_COPY(RestoreDBClusterFromS3Response)

};

} // namespace RDS
} // namespace QtAws

#endif
