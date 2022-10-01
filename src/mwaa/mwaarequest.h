// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MWAAREQUEST_H
#define QTAWS_MWAAREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmwaaglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Mwaa {

class MwaaRequestPrivate;

class QTAWSMWAA_EXPORT MwaaRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Mwaa.
    enum Action {
        CreateCliTokenAction,
        CreateEnvironmentAction,
        CreateWebLoginTokenAction,
        DeleteEnvironmentAction,
        GetEnvironmentAction,
        ListEnvironmentsAction,
        ListTagsForResourceAction,
        PublishMetricsAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateEnvironmentAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MwaaRequest(const Action action);
    MwaaRequest(const MwaaRequest &other);
    MwaaRequest &operator=(const MwaaRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MwaaRequest &other) const;


protected:
    /// @cond internal
    explicit MwaaRequest(MwaaRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MwaaRequest)

};

} // namespace Mwaa
} // namespace QtAws

#endif
