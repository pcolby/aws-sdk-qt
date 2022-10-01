// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTSRESPONSE_H
#define QTAWS_LISTHOSTSRESPONSE_H

#include "codestarconnectionsresponse.h"
#include "listhostsrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class ListHostsResponsePrivate;

class QTAWSCODESTARCONNECTIONS_EXPORT ListHostsResponse : public CodeStarconnectionsResponse {
    Q_OBJECT

public:
    ListHostsResponse(const ListHostsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHostsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHostsResponse)
    Q_DISABLE_COPY(ListHostsResponse)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
