// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPSITEMRELATEDITEMSRESPONSE_H
#define QTAWS_LISTOPSITEMRELATEDITEMSRESPONSE_H

#include "ssmresponse.h"
#include "listopsitemrelateditemsrequest.h"

namespace QtAws {
namespace Ssm {

class ListOpsItemRelatedItemsResponsePrivate;

class QTAWSSSM_EXPORT ListOpsItemRelatedItemsResponse : public SsmResponse {
    Q_OBJECT

public:
    ListOpsItemRelatedItemsResponse(const ListOpsItemRelatedItemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOpsItemRelatedItemsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOpsItemRelatedItemsResponse)
    Q_DISABLE_COPY(ListOpsItemRelatedItemsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
