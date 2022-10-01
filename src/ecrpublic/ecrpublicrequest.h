/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ECRPUBLICREQUEST_H
#define QTAWS_ECRPUBLICREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsecrpublicglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace EcrPublic {

class EcrPublicRequestPrivate;

class QTAWSECRPUBLIC_EXPORT EcrPublicRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by EcrPublic.
    enum Action {
        BatchCheckLayerAvailabilityAction,
        BatchDeleteImageAction,
        CompleteLayerUploadAction,
        CreateRepositoryAction,
        DeleteRepositoryAction,
        DeleteRepositoryPolicyAction,
        DescribeImageTagsAction,
        DescribeImagesAction,
        DescribeRegistriesAction,
        DescribeRepositoriesAction,
        GetAuthorizationTokenAction,
        GetRegistryCatalogDataAction,
        GetRepositoryCatalogDataAction,
        GetRepositoryPolicyAction,
        InitiateLayerUploadAction,
        ListTagsForResourceAction,
        PutImageAction,
        PutRegistryCatalogDataAction,
        PutRepositoryCatalogDataAction,
        SetRepositoryPolicyAction,
        TagResourceAction,
        UntagResourceAction,
        UploadLayerPartAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    EcrPublicRequest(const Action action);
    EcrPublicRequest(const EcrPublicRequest &other);
    EcrPublicRequest &operator=(const EcrPublicRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const EcrPublicRequest &other) const;


protected:
    /// @cond internal
    explicit EcrPublicRequest(EcrPublicRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EcrPublicRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
