// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICINFERENCEREQUEST_H
#define QTAWS_ELASTICINFERENCEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawselasticinferenceglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ElasticInference {

class ElasticInferenceRequestPrivate;

class QTAWSELASTICINFERENCE_EXPORT ElasticInferenceRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ElasticInference.
    enum Action {
        DescribeAcceleratorOfferingsAction,
        DescribeAcceleratorTypesAction,
        DescribeAcceleratorsAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ElasticInferenceRequest(const Action action);
    ElasticInferenceRequest(const ElasticInferenceRequest &other);
    ElasticInferenceRequest &operator=(const ElasticInferenceRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ElasticInferenceRequest &other) const;


protected:
    /// @cond internal
    explicit ElasticInferenceRequest(ElasticInferenceRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ElasticInferenceRequest)

};

} // namespace ElasticInference
} // namespace QtAws

#endif
