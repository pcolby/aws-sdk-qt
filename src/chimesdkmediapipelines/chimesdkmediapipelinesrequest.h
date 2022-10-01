// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKMEDIAPIPELINESREQUEST_H
#define QTAWS_CHIMESDKMEDIAPIPELINESREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawschimesdkmediapipelinesglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class ChimeSdkMediaPipelinesRequestPrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT ChimeSdkMediaPipelinesRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ChimeSdkMediaPipelines.
    enum Action {
        CreateMediaCapturePipelineAction,
        CreateMediaConcatenationPipelineAction,
        CreateMediaLiveConnectorPipelineAction,
        DeleteMediaCapturePipelineAction,
        DeleteMediaPipelineAction,
        GetMediaCapturePipelineAction,
        GetMediaPipelineAction,
        ListMediaCapturePipelinesAction,
        ListMediaPipelinesAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ChimeSdkMediaPipelinesRequest(const Action action);
    ChimeSdkMediaPipelinesRequest(const ChimeSdkMediaPipelinesRequest &other);
    ChimeSdkMediaPipelinesRequest &operator=(const ChimeSdkMediaPipelinesRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ChimeSdkMediaPipelinesRequest &other) const;


protected:
    /// @cond internal
    explicit ChimeSdkMediaPipelinesRequest(ChimeSdkMediaPipelinesRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChimeSdkMediaPipelinesRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
