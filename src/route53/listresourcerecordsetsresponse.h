// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCERECORDSETSRESPONSE_H
#define QTAWS_LISTRESOURCERECORDSETSRESPONSE_H

#include "route53response.h"
#include "listresourcerecordsetsrequest.h"

namespace QtAws {
namespace Route53 {

class ListResourceRecordSetsResponsePrivate;

class QTAWSROUTE53_EXPORT ListResourceRecordSetsResponse : public Route53Response {
    Q_OBJECT

public:
    ListResourceRecordSetsResponse(const ListResourceRecordSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourceRecordSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceRecordSetsResponse)
    Q_DISABLE_COPY(ListResourceRecordSetsResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
