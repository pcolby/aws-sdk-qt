// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONFIGURATIONITEMSFROMAPPLICATIONRESPONSE_H
#define QTAWS_DISASSOCIATECONFIGURATIONITEMSFROMAPPLICATIONRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "disassociateconfigurationitemsfromapplicationrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DisassociateConfigurationItemsFromApplicationResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT DisassociateConfigurationItemsFromApplicationResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    DisassociateConfigurationItemsFromApplicationResponse(const DisassociateConfigurationItemsFromApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateConfigurationItemsFromApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateConfigurationItemsFromApplicationResponse)
    Q_DISABLE_COPY(DisassociateConfigurationItemsFromApplicationResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
