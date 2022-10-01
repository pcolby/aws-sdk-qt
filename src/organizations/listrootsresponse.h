// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROOTSRESPONSE_H
#define QTAWS_LISTROOTSRESPONSE_H

#include "organizationsresponse.h"
#include "listrootsrequest.h"

namespace QtAws {
namespace Organizations {

class ListRootsResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT ListRootsResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    ListRootsResponse(const ListRootsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRootsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRootsResponse)
    Q_DISABLE_COPY(ListRootsResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
