// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OUTPOSTSREQUEST_H
#define QTAWS_OUTPOSTSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsoutpostsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Outposts {

class OutpostsRequestPrivate;

class QTAWSOUTPOSTS_EXPORT OutpostsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Outposts.
    enum Action {
        CancelOrderAction,
        CreateOrderAction,
        CreateOutpostAction,
        CreateSiteAction,
        DeleteOutpostAction,
        DeleteSiteAction,
        GetCatalogItemAction,
        GetConnectionAction,
        GetOrderAction,
        GetOutpostAction,
        GetOutpostInstanceTypesAction,
        GetSiteAction,
        GetSiteAddressAction,
        ListAssetsAction,
        ListCatalogItemsAction,
        ListOrdersAction,
        ListOutpostsAction,
        ListSitesAction,
        ListTagsForResourceAction,
        StartConnectionAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateOutpostAction,
        UpdateSiteAction,
        UpdateSiteAddressAction,
        UpdateSiteRackPhysicalPropertiesAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    OutpostsRequest(const Action action);
    OutpostsRequest(const OutpostsRequest &other);
    OutpostsRequest &operator=(const OutpostsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const OutpostsRequest &other) const;


protected:
    /// @cond internal
    explicit OutpostsRequest(OutpostsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(OutpostsRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
