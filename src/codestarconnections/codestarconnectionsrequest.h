// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODESTARCONNECTIONSREQUEST_H
#define QTAWS_CODESTARCONNECTIONSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscodestarconnectionsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CodeStarconnections {

class CodeStarconnectionsRequestPrivate;

class QTAWSCODESTARCONNECTIONS_EXPORT CodeStarconnectionsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CodeStarconnections.
    enum Action {
        CreateConnectionAction,
        CreateHostAction,
        DeleteConnectionAction,
        DeleteHostAction,
        GetConnectionAction,
        GetHostAction,
        ListConnectionsAction,
        ListHostsAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateHostAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CodeStarconnectionsRequest(const Action action);
    CodeStarconnectionsRequest(const CodeStarconnectionsRequest &other);
    CodeStarconnectionsRequest &operator=(const CodeStarconnectionsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CodeStarconnectionsRequest &other) const;


protected:
    /// @cond internal
    explicit CodeStarconnectionsRequest(CodeStarconnectionsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodeStarconnectionsRequest)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
