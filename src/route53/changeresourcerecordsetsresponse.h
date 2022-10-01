// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGERESOURCERECORDSETSRESPONSE_H
#define QTAWS_CHANGERESOURCERECORDSETSRESPONSE_H

#include "route53response.h"
#include "changeresourcerecordsetsrequest.h"

namespace QtAws {
namespace Route53 {

class ChangeResourceRecordSetsResponsePrivate;

class QTAWSROUTE53_EXPORT ChangeResourceRecordSetsResponse : public Route53Response {
    Q_OBJECT

public:
    ChangeResourceRecordSetsResponse(const ChangeResourceRecordSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ChangeResourceRecordSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChangeResourceRecordSetsResponse)
    Q_DISABLE_COPY(ChangeResourceRecordSetsResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
