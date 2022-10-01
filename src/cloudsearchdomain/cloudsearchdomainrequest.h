// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDSEARCHDOMAINREQUEST_H
#define QTAWS_CLOUDSEARCHDOMAINREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscloudsearchdomainglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CloudSearchDomain {

class CloudSearchDomainRequestPrivate;

class QTAWSCLOUDSEARCHDOMAIN_EXPORT CloudSearchDomainRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CloudSearchDomain.
    enum Action {
        SearchAction,
        SuggestAction,
        UploadDocumentsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CloudSearchDomainRequest(const Action action);
    CloudSearchDomainRequest(const CloudSearchDomainRequest &other);
    CloudSearchDomainRequest &operator=(const CloudSearchDomainRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CloudSearchDomainRequest &other) const;


protected:
    /// @cond internal
    explicit CloudSearchDomainRequest(CloudSearchDomainRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudSearchDomainRequest)

};

} // namespace CloudSearchDomain
} // namespace QtAws

#endif
