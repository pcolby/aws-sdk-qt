// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBSCRIPTIONATTRIBUTESRESPONSE_H
#define QTAWS_GETSUBSCRIPTIONATTRIBUTESRESPONSE_H

#include "snsresponse.h"
#include "getsubscriptionattributesrequest.h"

namespace QtAws {
namespace Sns {

class GetSubscriptionAttributesResponsePrivate;

class QTAWSSNS_EXPORT GetSubscriptionAttributesResponse : public SnsResponse {
    Q_OBJECT

public:
    GetSubscriptionAttributesResponse(const GetSubscriptionAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSubscriptionAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSubscriptionAttributesResponse)
    Q_DISABLE_COPY(GetSubscriptionAttributesResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
