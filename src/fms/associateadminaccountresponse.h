// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEADMINACCOUNTRESPONSE_H
#define QTAWS_ASSOCIATEADMINACCOUNTRESPONSE_H

#include "fmsresponse.h"
#include "associateadminaccountrequest.h"

namespace QtAws {
namespace Fms {

class AssociateAdminAccountResponsePrivate;

class QTAWSFMS_EXPORT AssociateAdminAccountResponse : public FmsResponse {
    Q_OBJECT

public:
    AssociateAdminAccountResponse(const AssociateAdminAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateAdminAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateAdminAccountResponse)
    Q_DISABLE_COPY(AssociateAdminAccountResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
