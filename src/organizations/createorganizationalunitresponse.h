// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORGANIZATIONALUNITRESPONSE_H
#define QTAWS_CREATEORGANIZATIONALUNITRESPONSE_H

#include "organizationsresponse.h"
#include "createorganizationalunitrequest.h"

namespace QtAws {
namespace Organizations {

class CreateOrganizationalUnitResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT CreateOrganizationalUnitResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    CreateOrganizationalUnitResponse(const CreateOrganizationalUnitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateOrganizationalUnitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOrganizationalUnitResponse)
    Q_DISABLE_COPY(CreateOrganizationalUnitResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
