// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOSIGNALINGREQUEST_H
#define QTAWS_KINESISVIDEOSIGNALINGREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawskinesisvideosignalingglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace KinesisVideoSignaling {

class KinesisVideoSignalingRequestPrivate;

class QTAWSKINESISVIDEOSIGNALING_EXPORT KinesisVideoSignalingRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by KinesisVideoSignaling.
    enum Action {
        GetIceServerConfigAction,
        SendAlexaOfferToMasterAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    KinesisVideoSignalingRequest(const Action action);
    KinesisVideoSignalingRequest(const KinesisVideoSignalingRequest &other);
    KinesisVideoSignalingRequest &operator=(const KinesisVideoSignalingRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const KinesisVideoSignalingRequest &other) const;


protected:
    /// @cond internal
    explicit KinesisVideoSignalingRequest(KinesisVideoSignalingRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KinesisVideoSignalingRequest)

};

} // namespace KinesisVideoSignaling
} // namespace QtAws

#endif
