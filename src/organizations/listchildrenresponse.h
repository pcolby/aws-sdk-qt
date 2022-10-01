// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHILDRENRESPONSE_H
#define QTAWS_LISTCHILDRENRESPONSE_H

#include "organizationsresponse.h"
#include "listchildrenrequest.h"

namespace QtAws {
namespace Organizations {

class ListChildrenResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT ListChildrenResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    ListChildrenResponse(const ListChildrenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListChildrenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChildrenResponse)
    Q_DISABLE_COPY(ListChildrenResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
