// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGAGGREGATORSRESPONSE_H
#define QTAWS_LISTFINDINGAGGREGATORSRESPONSE_H

#include "securityhubresponse.h"
#include "listfindingaggregatorsrequest.h"

namespace QtAws {
namespace SecurityHub {

class ListFindingAggregatorsResponsePrivate;

class QTAWSSECURITYHUB_EXPORT ListFindingAggregatorsResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    ListFindingAggregatorsResponse(const ListFindingAggregatorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFindingAggregatorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFindingAggregatorsResponse)
    Q_DISABLE_COPY(ListFindingAggregatorsResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
