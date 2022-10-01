// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_S3OUTPOSTSREQUEST_H
#define QTAWS_S3OUTPOSTSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawss3outpostsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace S3Outposts {

class S3OutpostsRequestPrivate;

class QTAWSS3OUTPOSTS_EXPORT S3OutpostsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by S3Outposts.
    enum Action {
        CreateEndpointAction,
        DeleteEndpointAction,
        ListEndpointsAction,
        ListSharedEndpointsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    S3OutpostsRequest(const Action action);
    S3OutpostsRequest(const S3OutpostsRequest &other);
    S3OutpostsRequest &operator=(const S3OutpostsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const S3OutpostsRequest &other) const;


protected:
    /// @cond internal
    explicit S3OutpostsRequest(S3OutpostsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(S3OutpostsRequest)

};

} // namespace S3Outposts
} // namespace QtAws

#endif
