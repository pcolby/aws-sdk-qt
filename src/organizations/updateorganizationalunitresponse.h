// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORGANIZATIONALUNITRESPONSE_H
#define QTAWS_UPDATEORGANIZATIONALUNITRESPONSE_H

#include "organizationsresponse.h"
#include "updateorganizationalunitrequest.h"

namespace QtAws {
namespace Organizations {

class UpdateOrganizationalUnitResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT UpdateOrganizationalUnitResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    UpdateOrganizationalUnitResponse(const UpdateOrganizationalUnitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateOrganizationalUnitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOrganizationalUnitResponse)
    Q_DISABLE_COPY(UpdateOrganizationalUnitResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
