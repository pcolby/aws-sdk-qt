// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLYREQUEST_H
#define QTAWS_POLLYREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawspollyglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Polly {

class PollyRequestPrivate;

class QTAWSPOLLY_EXPORT PollyRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Polly.
    enum Action {
        DeleteLexiconAction,
        DescribeVoicesAction,
        GetLexiconAction,
        GetSpeechSynthesisTaskAction,
        ListLexiconsAction,
        ListSpeechSynthesisTasksAction,
        PutLexiconAction,
        StartSpeechSynthesisTaskAction,
        SynthesizeSpeechAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    PollyRequest(const Action action);
    PollyRequest(const PollyRequest &other);
    PollyRequest &operator=(const PollyRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const PollyRequest &other) const;


protected:
    /// @cond internal
    explicit PollyRequest(PollyRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PollyRequest)

};

} // namespace Polly
} // namespace QtAws

#endif
