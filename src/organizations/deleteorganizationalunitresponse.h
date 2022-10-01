// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORGANIZATIONALUNITRESPONSE_H
#define QTAWS_DELETEORGANIZATIONALUNITRESPONSE_H

#include "organizationsresponse.h"
#include "deleteorganizationalunitrequest.h"

namespace QtAws {
namespace Organizations {

class DeleteOrganizationalUnitResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT DeleteOrganizationalUnitResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    DeleteOrganizationalUnitResponse(const DeleteOrganizationalUnitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteOrganizationalUnitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOrganizationalUnitResponse)
    Q_DISABLE_COPY(DeleteOrganizationalUnitResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
