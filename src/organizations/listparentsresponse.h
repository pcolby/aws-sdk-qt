// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARENTSRESPONSE_H
#define QTAWS_LISTPARENTSRESPONSE_H

#include "organizationsresponse.h"
#include "listparentsrequest.h"

namespace QtAws {
namespace Organizations {

class ListParentsResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT ListParentsResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    ListParentsResponse(const ListParentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListParentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListParentsResponse)
    Q_DISABLE_COPY(ListParentsResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
