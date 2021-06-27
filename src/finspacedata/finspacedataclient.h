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

#ifndef QTAWS_FINSPACEDATACLIENT_H
#define QTAWS_FINSPACEDATACLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace FinSpaceData {

class FinSpaceDataClientPrivate;
class CreateChangesetRequest;
class CreateChangesetResponse;
class GetProgrammaticAccessCredentialsRequest;
class GetProgrammaticAccessCredentialsResponse;
class GetWorkingLocationRequest;
class GetWorkingLocationResponse;

class QTAWS_EXPORT FinSpaceDataClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    FinSpaceDataClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    FinSpaceDataClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateChangesetResponse * createChangeset(const CreateChangesetRequest &request);
    GetProgrammaticAccessCredentialsResponse * getProgrammaticAccessCredentials(const GetProgrammaticAccessCredentialsRequest &request);
    GetWorkingLocationResponse * getWorkingLocation(const GetWorkingLocationRequest &request);

protected:
    /// @cond internal
    FinSpaceDataClientPrivate * const d_ptr; ///< Internal d-pointer.
    FinSpaceDataClient(FinSpaceDataClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(FinSpaceDataClient)
    Q_DISABLE_COPY(FinSpaceDataClient)

};

} // namespace FinSpaceData
} // namespace QtAws

#endif
