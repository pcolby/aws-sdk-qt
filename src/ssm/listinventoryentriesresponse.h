// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINVENTORYENTRIESRESPONSE_H
#define QTAWS_LISTINVENTORYENTRIESRESPONSE_H

#include "ssmresponse.h"
#include "listinventoryentriesrequest.h"

namespace QtAws {
namespace Ssm {

class ListInventoryEntriesResponsePrivate;

class QTAWSSSM_EXPORT ListInventoryEntriesResponse : public SsmResponse {
    Q_OBJECT

public:
    ListInventoryEntriesResponse(const ListInventoryEntriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInventoryEntriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInventoryEntriesResponse)
    Q_DISABLE_COPY(ListInventoryEntriesResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
