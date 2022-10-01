// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROLESANYWHEREREQUEST_H
#define QTAWS_ROLESANYWHEREREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsrolesanywhereglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace RolesAnywhere {

class RolesAnywhereRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT RolesAnywhereRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by RolesAnywhere.
    enum Action {
        CreateProfileAction,
        CreateTrustAnchorAction,
        DeleteCrlAction,
        DeleteProfileAction,
        DeleteTrustAnchorAction,
        DisableCrlAction,
        DisableProfileAction,
        DisableTrustAnchorAction,
        EnableCrlAction,
        EnableProfileAction,
        EnableTrustAnchorAction,
        GetCrlAction,
        GetProfileAction,
        GetSubjectAction,
        GetTrustAnchorAction,
        ImportCrlAction,
        ListCrlsAction,
        ListProfilesAction,
        ListSubjectsAction,
        ListTagsForResourceAction,
        ListTrustAnchorsAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateCrlAction,
        UpdateProfileAction,
        UpdateTrustAnchorAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    RolesAnywhereRequest(const Action action);
    RolesAnywhereRequest(const RolesAnywhereRequest &other);
    RolesAnywhereRequest &operator=(const RolesAnywhereRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const RolesAnywhereRequest &other) const;


protected:
    /// @cond internal
    explicit RolesAnywhereRequest(RolesAnywhereRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RolesAnywhereRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
