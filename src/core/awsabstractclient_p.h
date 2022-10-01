// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSABSTRACTCLIENT_P_H
#define AWSABSTRACTCLIENT_P_H

#include "awsregion.h"

#include <QSet>

class QNetworkAccessManager;
class QUrl;

namespace QtAws {
namespace Core {

class AwsAbstractClient;
class AwsAbstractCredentials;
class AwsAbstractRequest;
class AwsAbstractSignature;

// Exported for *internal* use by other QtAws modules only.
class QTAWSCORE_EXPORT AwsAbstractClientPrivate {

public:
    QString apiVersion;                           ///< Amazon service API version.
    AwsAbstractCredentials * credentials;         ///< Amazon credentials.
    QUrl endpoint;                                ///< Amazon service endpoint.
    QString endpointPrefix;                       ///< Amazon service endpoint.
    QNetworkAccessManager * networkAccessManager; ///< Network access manager.
    AwsRegion::Region region;                     ///< Amazon service region.
    QString serviceFullName;                      ///< Amazon service full name.
    QString serviceName;                          ///< Amazon service name.
    AwsAbstractSignature * signature;             ///< Amazon signature object.

    explicit AwsAbstractClientPrivate(AwsAbstractClient * const q);

    virtual ~AwsAbstractClientPrivate();

protected:
    AwsAbstractClient * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(AwsAbstractClient)
    Q_DISABLE_COPY(AwsAbstractClientPrivate)
    friend class TestAwsAbstractClient;
};

} // namespace Core
} // namespace QtAws

#endif
