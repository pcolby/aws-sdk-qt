// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PERSONALIZEEVENTSREQUEST_H
#define QTAWS_PERSONALIZEEVENTSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawspersonalizeeventsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace PersonalizeEvents {

class PersonalizeEventsRequestPrivate;

class QTAWSPERSONALIZEEVENTS_EXPORT PersonalizeEventsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by PersonalizeEvents.
    enum Action {
        PutEventsAction,
        PutItemsAction,
        PutUsersAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    PersonalizeEventsRequest(const Action action);
    PersonalizeEventsRequest(const PersonalizeEventsRequest &other);
    PersonalizeEventsRequest &operator=(const PersonalizeEventsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const PersonalizeEventsRequest &other) const;


protected:
    /// @cond internal
    explicit PersonalizeEventsRequest(PersonalizeEventsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PersonalizeEventsRequest)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif
