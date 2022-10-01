// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKLOADSHARESRESPONSE_H
#define QTAWS_LISTWORKLOADSHARESRESPONSE_H

#include "wellarchitectedresponse.h"
#include "listworkloadsharesrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListWorkloadSharesResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT ListWorkloadSharesResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    ListWorkloadSharesResponse(const ListWorkloadSharesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWorkloadSharesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkloadSharesResponse)
    Q_DISABLE_COPY(ListWorkloadSharesResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
