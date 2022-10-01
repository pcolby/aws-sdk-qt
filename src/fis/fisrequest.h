// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FISREQUEST_H
#define QTAWS_FISREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsfisglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Fis {

class FisRequestPrivate;

class QTAWSFIS_EXPORT FisRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Fis.
    enum Action {
        CreateExperimentTemplateAction,
        DeleteExperimentTemplateAction,
        GetActionAction,
        GetExperimentAction,
        GetExperimentTemplateAction,
        GetTargetResourceTypeAction,
        ListActionsAction,
        ListExperimentTemplatesAction,
        ListExperimentsAction,
        ListTagsForResourceAction,
        ListTargetResourceTypesAction,
        StartExperimentAction,
        StopExperimentAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateExperimentTemplateAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    FisRequest(const Action action);
    FisRequest(const FisRequest &other);
    FisRequest &operator=(const FisRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const FisRequest &other) const;


protected:
    /// @cond internal
    explicit FisRequest(FisRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FisRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
