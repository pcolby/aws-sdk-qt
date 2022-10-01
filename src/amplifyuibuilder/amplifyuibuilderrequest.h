// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPLIFYUIBUILDERREQUEST_H
#define QTAWS_AMPLIFYUIBUILDERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsamplifyuibuilderglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace AmplifyUIBuilder {

class AmplifyUIBuilderRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT AmplifyUIBuilderRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by AmplifyUIBuilder.
    enum Action {
        CreateComponentAction,
        CreateFormAction,
        CreateThemeAction,
        DeleteComponentAction,
        DeleteFormAction,
        DeleteThemeAction,
        ExchangeCodeForTokenAction,
        ExportComponentsAction,
        ExportFormsAction,
        ExportThemesAction,
        GetComponentAction,
        GetFormAction,
        GetMetadataAction,
        GetThemeAction,
        ListComponentsAction,
        ListFormsAction,
        ListThemesAction,
        PutMetadataFlagAction,
        RefreshTokenAction,
        UpdateComponentAction,
        UpdateFormAction,
        UpdateThemeAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AmplifyUIBuilderRequest(const Action action);
    AmplifyUIBuilderRequest(const AmplifyUIBuilderRequest &other);
    AmplifyUIBuilderRequest &operator=(const AmplifyUIBuilderRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AmplifyUIBuilderRequest &other) const;


protected:
    /// @cond internal
    explicit AmplifyUIBuilderRequest(AmplifyUIBuilderRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AmplifyUIBuilderRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
