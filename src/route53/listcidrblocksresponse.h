// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCIDRBLOCKSRESPONSE_H
#define QTAWS_LISTCIDRBLOCKSRESPONSE_H

#include "route53response.h"
#include "listcidrblocksrequest.h"

namespace QtAws {
namespace Route53 {

class ListCidrBlocksResponsePrivate;

class QTAWSROUTE53_EXPORT ListCidrBlocksResponse : public Route53Response {
    Q_OBJECT

public:
    ListCidrBlocksResponse(const ListCidrBlocksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCidrBlocksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCidrBlocksResponse)
    Q_DISABLE_COPY(ListCidrBlocksResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
