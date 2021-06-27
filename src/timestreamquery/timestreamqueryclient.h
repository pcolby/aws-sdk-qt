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

#ifndef QTAWS_TIMESTREAMQUERYCLIENT_H
#define QTAWS_TIMESTREAMQUERYCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace TimestreamQuery {

class TimestreamQueryClientPrivate;
class CancelQueryRequest;
class CancelQueryResponse;
class DescribeEndpointsRequest;
class DescribeEndpointsResponse;
class QueryRequest;
class QueryResponse;

class QTAWS_EXPORT TimestreamQueryClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    TimestreamQueryClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    TimestreamQueryClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelQueryResponse * cancelQuery(const CancelQueryRequest &request);
    DescribeEndpointsResponse * describeEndpoints(const DescribeEndpointsRequest &request);
    QueryResponse * query(const QueryRequest &request);

protected:
    /// @cond internal
    TimestreamQueryClientPrivate * const d_ptr; ///< Internal d-pointer.
    TimestreamQueryClient(TimestreamQueryClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(TimestreamQueryClient)
    Q_DISABLE_COPY(TimestreamQueryClient)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
