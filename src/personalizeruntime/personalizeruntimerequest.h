// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PERSONALIZERUNTIMEREQUEST_H
#define QTAWS_PERSONALIZERUNTIMEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawspersonalizeruntimeglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace PersonalizeRuntime {

class PersonalizeRuntimeRequestPrivate;

class QTAWSPERSONALIZERUNTIME_EXPORT PersonalizeRuntimeRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by PersonalizeRuntime.
    enum Action {
        GetPersonalizedRankingAction,
        GetRecommendationsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    PersonalizeRuntimeRequest(const Action action);
    PersonalizeRuntimeRequest(const PersonalizeRuntimeRequest &other);
    PersonalizeRuntimeRequest &operator=(const PersonalizeRuntimeRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const PersonalizeRuntimeRequest &other) const;


protected:
    /// @cond internal
    explicit PersonalizeRuntimeRequest(PersonalizeRuntimeRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PersonalizeRuntimeRequest)

};

} // namespace PersonalizeRuntime
} // namespace QtAws

#endif
