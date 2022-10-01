// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIACONVERTREQUEST_H
#define QTAWS_MEDIACONVERTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmediaconvertglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MediaConvert {

class MediaConvertRequestPrivate;

class QTAWSMEDIACONVERT_EXPORT MediaConvertRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MediaConvert.
    enum Action {
        AssociateCertificateAction,
        CancelJobAction,
        CreateJobAction,
        CreateJobTemplateAction,
        CreatePresetAction,
        CreateQueueAction,
        DeleteJobTemplateAction,
        DeletePolicyAction,
        DeletePresetAction,
        DeleteQueueAction,
        DescribeEndpointsAction,
        DisassociateCertificateAction,
        GetJobAction,
        GetJobTemplateAction,
        GetPolicyAction,
        GetPresetAction,
        GetQueueAction,
        ListJobTemplatesAction,
        ListJobsAction,
        ListPresetsAction,
        ListQueuesAction,
        ListTagsForResourceAction,
        PutPolicyAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateJobTemplateAction,
        UpdatePresetAction,
        UpdateQueueAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MediaConvertRequest(const Action action);
    MediaConvertRequest(const MediaConvertRequest &other);
    MediaConvertRequest &operator=(const MediaConvertRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MediaConvertRequest &other) const;


protected:
    /// @cond internal
    explicit MediaConvertRequest(MediaConvertRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MediaConvertRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
