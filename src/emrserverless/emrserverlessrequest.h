// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EMRSERVERLESSREQUEST_H
#define QTAWS_EMRSERVERLESSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsemrserverlessglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace EmrServerless {

class EmrServerlessRequestPrivate;

class QTAWSEMRSERVERLESS_EXPORT EmrServerlessRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by EmrServerless.
    enum Action {
        CancelJobRunAction,
        CreateApplicationAction,
        DeleteApplicationAction,
        GetApplicationAction,
        GetJobRunAction,
        ListApplicationsAction,
        ListJobRunsAction,
        ListTagsForResourceAction,
        StartApplicationAction,
        StartJobRunAction,
        StopApplicationAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateApplicationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    EmrServerlessRequest(const Action action);
    EmrServerlessRequest(const EmrServerlessRequest &other);
    EmrServerlessRequest &operator=(const EmrServerlessRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const EmrServerlessRequest &other) const;


protected:
    /// @cond internal
    explicit EmrServerlessRequest(EmrServerlessRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EmrServerlessRequest)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
