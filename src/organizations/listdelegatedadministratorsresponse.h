// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELEGATEDADMINISTRATORSRESPONSE_H
#define QTAWS_LISTDELEGATEDADMINISTRATORSRESPONSE_H

#include "organizationsresponse.h"
#include "listdelegatedadministratorsrequest.h"

namespace QtAws {
namespace Organizations {

class ListDelegatedAdministratorsResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT ListDelegatedAdministratorsResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    ListDelegatedAdministratorsResponse(const ListDelegatedAdministratorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDelegatedAdministratorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDelegatedAdministratorsResponse)
    Q_DISABLE_COPY(ListDelegatedAdministratorsResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
