// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOARCHIVEDMEDIAREQUEST_H
#define QTAWS_KINESISVIDEOARCHIVEDMEDIAREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawskinesisvideoarchivedmediaglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class KinesisVideoArchivedMediaRequestPrivate;

class QTAWSKINESISVIDEOARCHIVEDMEDIA_EXPORT KinesisVideoArchivedMediaRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by KinesisVideoArchivedMedia.
    enum Action {
        GetClipAction,
        GetDASHStreamingSessionURLAction,
        GetHLSStreamingSessionURLAction,
        GetImagesAction,
        GetMediaForFragmentListAction,
        ListFragmentsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    KinesisVideoArchivedMediaRequest(const Action action);
    KinesisVideoArchivedMediaRequest(const KinesisVideoArchivedMediaRequest &other);
    KinesisVideoArchivedMediaRequest &operator=(const KinesisVideoArchivedMediaRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const KinesisVideoArchivedMediaRequest &other) const;


protected:
    /// @cond internal
    explicit KinesisVideoArchivedMediaRequest(KinesisVideoArchivedMediaRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KinesisVideoArchivedMediaRequest)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
