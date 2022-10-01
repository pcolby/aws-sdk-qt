// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLENSSHARESRESPONSE_H
#define QTAWS_LISTLENSSHARESRESPONSE_H

#include "wellarchitectedresponse.h"
#include "listlenssharesrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListLensSharesResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT ListLensSharesResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    ListLensSharesResponse(const ListLensSharesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLensSharesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLensSharesResponse)
    Q_DISABLE_COPY(ListLensSharesResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
