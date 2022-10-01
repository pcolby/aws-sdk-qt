// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONFIGURATIONITEMSTOAPPLICATIONRESPONSE_H
#define QTAWS_ASSOCIATECONFIGURATIONITEMSTOAPPLICATIONRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "associateconfigurationitemstoapplicationrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class AssociateConfigurationItemsToApplicationResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT AssociateConfigurationItemsToApplicationResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    AssociateConfigurationItemsToApplicationResponse(const AssociateConfigurationItemsToApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateConfigurationItemsToApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateConfigurationItemsToApplicationResponse)
    Q_DISABLE_COPY(AssociateConfigurationItemsToApplicationResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
