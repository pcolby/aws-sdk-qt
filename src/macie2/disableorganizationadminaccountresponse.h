// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEORGANIZATIONADMINACCOUNTRESPONSE_H
#define QTAWS_DISABLEORGANIZATIONADMINACCOUNTRESPONSE_H

#include "macie2response.h"
#include "disableorganizationadminaccountrequest.h"

namespace QtAws {
namespace Macie2 {

class DisableOrganizationAdminAccountResponsePrivate;

class QTAWSMACIE2_EXPORT DisableOrganizationAdminAccountResponse : public Macie2Response {
    Q_OBJECT

public:
    DisableOrganizationAdminAccountResponse(const DisableOrganizationAdminAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableOrganizationAdminAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableOrganizationAdminAccountResponse)
    Q_DISABLE_COPY(DisableOrganizationAdminAccountResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
