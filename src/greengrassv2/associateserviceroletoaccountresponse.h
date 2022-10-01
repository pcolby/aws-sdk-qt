// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESERVICEROLETOACCOUNTRESPONSE_H
#define QTAWS_ASSOCIATESERVICEROLETOACCOUNTRESPONSE_H

#include "greengrassv2response.h"
#include "associateserviceroletoaccountrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class AssociateServiceRoleToAccountResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT AssociateServiceRoleToAccountResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    AssociateServiceRoleToAccountResponse(const AssociateServiceRoleToAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateServiceRoleToAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateServiceRoleToAccountResponse)
    Q_DISABLE_COPY(AssociateServiceRoleToAccountResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
