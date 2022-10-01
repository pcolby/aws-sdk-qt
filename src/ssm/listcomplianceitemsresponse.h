// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPLIANCEITEMSRESPONSE_H
#define QTAWS_LISTCOMPLIANCEITEMSRESPONSE_H

#include "ssmresponse.h"
#include "listcomplianceitemsrequest.h"

namespace QtAws {
namespace Ssm {

class ListComplianceItemsResponsePrivate;

class QTAWSSSM_EXPORT ListComplianceItemsResponse : public SsmResponse {
    Q_OBJECT

public:
    ListComplianceItemsResponse(const ListComplianceItemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListComplianceItemsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComplianceItemsResponse)
    Q_DISABLE_COPY(ListComplianceItemsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
