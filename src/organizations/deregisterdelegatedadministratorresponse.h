// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERDELEGATEDADMINISTRATORRESPONSE_H
#define QTAWS_DEREGISTERDELEGATEDADMINISTRATORRESPONSE_H

#include "organizationsresponse.h"
#include "deregisterdelegatedadministratorrequest.h"

namespace QtAws {
namespace Organizations {

class DeregisterDelegatedAdministratorResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT DeregisterDelegatedAdministratorResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    DeregisterDelegatedAdministratorResponse(const DeregisterDelegatedAdministratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterDelegatedAdministratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterDelegatedAdministratorResponse)
    Q_DISABLE_COPY(DeregisterDelegatedAdministratorResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
