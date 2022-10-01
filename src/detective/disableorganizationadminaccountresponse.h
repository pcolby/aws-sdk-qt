// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEORGANIZATIONADMINACCOUNTRESPONSE_H
#define QTAWS_DISABLEORGANIZATIONADMINACCOUNTRESPONSE_H

#include "detectiveresponse.h"
#include "disableorganizationadminaccountrequest.h"

namespace QtAws {
namespace Detective {

class DisableOrganizationAdminAccountResponsePrivate;

class QTAWSDETECTIVE_EXPORT DisableOrganizationAdminAccountResponse : public DetectiveResponse {
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

} // namespace Detective
} // namespace QtAws

#endif
