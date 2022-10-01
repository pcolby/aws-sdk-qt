// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHANDSHAKESFORORGANIZATIONRESPONSE_H
#define QTAWS_LISTHANDSHAKESFORORGANIZATIONRESPONSE_H

#include "organizationsresponse.h"
#include "listhandshakesfororganizationrequest.h"

namespace QtAws {
namespace Organizations {

class ListHandshakesForOrganizationResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT ListHandshakesForOrganizationResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    ListHandshakesForOrganizationResponse(const ListHandshakesForOrganizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHandshakesForOrganizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHandshakesForOrganizationResponse)
    Q_DISABLE_COPY(ListHandshakesForOrganizationResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
