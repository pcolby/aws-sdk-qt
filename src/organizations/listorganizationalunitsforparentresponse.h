// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONALUNITSFORPARENTRESPONSE_H
#define QTAWS_LISTORGANIZATIONALUNITSFORPARENTRESPONSE_H

#include "organizationsresponse.h"
#include "listorganizationalunitsforparentrequest.h"

namespace QtAws {
namespace Organizations {

class ListOrganizationalUnitsForParentResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT ListOrganizationalUnitsForParentResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    ListOrganizationalUnitsForParentResponse(const ListOrganizationalUnitsForParentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOrganizationalUnitsForParentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOrganizationalUnitsForParentResponse)
    Q_DISABLE_COPY(ListOrganizationalUnitsForParentResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
