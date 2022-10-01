// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOMEDIAREQUEST_H
#define QTAWS_KINESISVIDEOMEDIAREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawskinesisvideomediaglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace KinesisVideoMedia {

class KinesisVideoMediaRequestPrivate;

class QTAWSKINESISVIDEOMEDIA_EXPORT KinesisVideoMediaRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by KinesisVideoMedia.
    enum Action {
        GetMediaAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    KinesisVideoMediaRequest(const Action action);
    KinesisVideoMediaRequest(const KinesisVideoMediaRequest &other);
    KinesisVideoMediaRequest &operator=(const KinesisVideoMediaRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const KinesisVideoMediaRequest &other) const;


protected:
    /// @cond internal
    explicit KinesisVideoMediaRequest(KinesisVideoMediaRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KinesisVideoMediaRequest)

};

} // namespace KinesisVideoMedia
} // namespace QtAws

#endif
