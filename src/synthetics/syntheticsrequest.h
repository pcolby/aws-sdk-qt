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

#ifndef QTAWS_SYNTHETICSREQUEST_H
#define QTAWS_SYNTHETICSREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Synthetics {

class SyntheticsRequestPrivate;

class QTAWS_EXPORT SyntheticsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Synthetics.
    enum Action {
        CreateCanaryAction,
        DeleteCanaryAction,
        DescribeCanariesAction,
        DescribeCanariesLastRunAction,
        DescribeRuntimeVersionsAction,
        GetCanaryAction,
        GetCanaryRunsAction,
        ListTagsForResourceAction,
        StartCanaryAction,
        StopCanaryAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateCanaryAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SyntheticsRequest(const Action action);
    SyntheticsRequest(const SyntheticsRequest &other);
    SyntheticsRequest &operator=(const SyntheticsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SyntheticsRequest &other) const;


protected:
    /// @cond internal
    SyntheticsRequest(SyntheticsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SyntheticsRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
