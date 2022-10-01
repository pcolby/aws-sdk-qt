// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSABSTRACTCLIENT_H
#define AWSABSTRACTCLIENT_H

#include "awsregion.h"

#include <QObject>

class QNetworkAccessManager;
class QNetworkReply;

namespace QtAws {
namespace Core {

class AwsAbstractClientPrivate;
class AwsAbstractCredentials;
class AwsAbstractRequest;
class AwsAbstractResponse;
class AwsAbstractSignature;

class QTAWSCORE_EXPORT AwsAbstractClient : public QObject {
    Q_OBJECT

public:
    AwsAbstractClient(QObject * const parent = 0);

    virtual ~AwsAbstractClient();

    QString apiVersion() const;
    QUrl endpoint() const;
    QString endpointPrefix() const;
    QNetworkAccessManager * networkAccessManager() const;
    AwsRegion::Region region() const;
    virtual AwsAbstractResponse * send(const AwsAbstractRequest &request);
    QString serviceFullName() const;
    QString serviceName() const;

    void setCredentials(AwsAbstractCredentials * const credentials);
    void setEndpoint(const QUrl &endpoint);
    void setNetworkAccessManager(QNetworkAccessManager * const manager);
    void setRegion(const AwsRegion::Region region);

protected:
    /// @cond internal
    AwsAbstractClientPrivate * const d_ptr; ///< Internal d-pointer.
    AwsAbstractClient(AwsAbstractClientPrivate * const d, QObject * const parent);
    /// @endcond

    virtual AwsAbstractCredentials * credentials() const;
    virtual AwsAbstractSignature * signature() const;

private:
    Q_DECLARE_PRIVATE(AwsAbstractClient)
    Q_DISABLE_COPY(AwsAbstractClient)
    friend class TestAwsAbstractClient;
};

} // namespace Core
} // namespace QtAws

#endif
