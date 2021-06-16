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

#ifndef QTAWS_COMPREHENDMEDICALCLIENT_H
#define QTAWS_COMPREHENDMEDICALCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace ComprehendMedical {

class ComprehendMedicalClientPrivate;
class DetectEntitiesRequest;
class DetectEntitiesResponse;
class DetectPHIRequest;
class DetectPHIResponse;

class QTAWS_EXPORT ComprehendMedicalClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ComprehendMedicalClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ComprehendMedicalClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DetectEntitiesResponse * detectEntities(const DetectEntitiesRequest &request);
    DetectPHIResponse * detectPHI(const DetectPHIRequest &request);

private:
    Q_DECLARE_PRIVATE(ComprehendMedicalClient)
    Q_DISABLE_COPY(ComprehendMedicalClient)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
