// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICTRANSCODERREQUEST_H
#define QTAWS_ELASTICTRANSCODERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawselastictranscoderglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ElasticTranscoder {

class ElasticTranscoderRequestPrivate;

class QTAWSELASTICTRANSCODER_EXPORT ElasticTranscoderRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ElasticTranscoder.
    enum Action {
        CancelJobAction,
        CreateJobAction,
        CreatePipelineAction,
        CreatePresetAction,
        DeletePipelineAction,
        DeletePresetAction,
        ListJobsByPipelineAction,
        ListJobsByStatusAction,
        ListPipelinesAction,
        ListPresetsAction,
        ReadJobAction,
        ReadPipelineAction,
        ReadPresetAction,
        TestRoleAction,
        UpdatePipelineAction,
        UpdatePipelineNotificationsAction,
        UpdatePipelineStatusAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ElasticTranscoderRequest(const Action action);
    ElasticTranscoderRequest(const ElasticTranscoderRequest &other);
    ElasticTranscoderRequest &operator=(const ElasticTranscoderRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ElasticTranscoderRequest &other) const;


protected:
    /// @cond internal
    explicit ElasticTranscoderRequest(ElasticTranscoderRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ElasticTranscoderRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
