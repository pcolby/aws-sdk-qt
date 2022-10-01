// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEACCOUNTFROMORGANIZATIONRESPONSE_H
#define QTAWS_REMOVEACCOUNTFROMORGANIZATIONRESPONSE_H

#include "organizationsresponse.h"
#include "removeaccountfromorganizationrequest.h"

namespace QtAws {
namespace Organizations {

class RemoveAccountFromOrganizationResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT RemoveAccountFromOrganizationResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    RemoveAccountFromOrganizationResponse(const RemoveAccountFromOrganizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveAccountFromOrganizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveAccountFromOrganizationResponse)
    Q_DISABLE_COPY(RemoveAccountFromOrganizationResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
