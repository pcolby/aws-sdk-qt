// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFAQSRESPONSE_H
#define QTAWS_LISTFAQSRESPONSE_H

#include "kendraresponse.h"
#include "listfaqsrequest.h"

namespace QtAws {
namespace Kendra {

class ListFaqsResponsePrivate;

class QTAWSKENDRA_EXPORT ListFaqsResponse : public KendraResponse {
    Q_OBJECT

public:
    ListFaqsResponse(const ListFaqsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFaqsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFaqsResponse)
    Q_DISABLE_COPY(ListFaqsResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
