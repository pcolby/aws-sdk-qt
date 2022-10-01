// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDELEGATEDADMINISTRATORRESPONSE_H
#define QTAWS_REGISTERDELEGATEDADMINISTRATORRESPONSE_H

#include "organizationsresponse.h"
#include "registerdelegatedadministratorrequest.h"

namespace QtAws {
namespace Organizations {

class RegisterDelegatedAdministratorResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT RegisterDelegatedAdministratorResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    RegisterDelegatedAdministratorResponse(const RegisterDelegatedAdministratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterDelegatedAdministratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterDelegatedAdministratorResponse)
    Q_DISABLE_COPY(RegisterDelegatedAdministratorResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
