// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSCRIBESTREAMINGREQUEST_H
#define QTAWS_TRANSCRIBESTREAMINGREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawstranscribestreamingglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace TranscribeStreaming {

class TranscribeStreamingRequestPrivate;

class QTAWSTRANSCRIBESTREAMING_EXPORT TranscribeStreamingRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by TranscribeStreaming.
    enum Action {
        StartMedicalStreamTranscriptionAction,
        StartStreamTranscriptionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    TranscribeStreamingRequest(const Action action);
    TranscribeStreamingRequest(const TranscribeStreamingRequest &other);
    TranscribeStreamingRequest &operator=(const TranscribeStreamingRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const TranscribeStreamingRequest &other) const;


protected:
    /// @cond internal
    explicit TranscribeStreamingRequest(TranscribeStreamingRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TranscribeStreamingRequest)

};

} // namespace TranscribeStreaming
} // namespace QtAws

#endif
