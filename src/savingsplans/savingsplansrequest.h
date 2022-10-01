// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAVINGSPLANSREQUEST_H
#define QTAWS_SAVINGSPLANSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssavingsplansglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SavingsPlans {

class SavingsPlansRequestPrivate;

class QTAWSSAVINGSPLANS_EXPORT SavingsPlansRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SavingsPlans.
    enum Action {
        CreateSavingsPlanAction,
        DeleteQueuedSavingsPlanAction,
        DescribeSavingsPlanRatesAction,
        DescribeSavingsPlansAction,
        DescribeSavingsPlansOfferingRatesAction,
        DescribeSavingsPlansOfferingsAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SavingsPlansRequest(const Action action);
    SavingsPlansRequest(const SavingsPlansRequest &other);
    SavingsPlansRequest &operator=(const SavingsPlansRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SavingsPlansRequest &other) const;


protected:
    /// @cond internal
    explicit SavingsPlansRequest(SavingsPlansRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SavingsPlansRequest)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
