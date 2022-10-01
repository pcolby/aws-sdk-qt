// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSUBSCRIPTIONATTRIBUTESRESPONSE_H
#define QTAWS_SETSUBSCRIPTIONATTRIBUTESRESPONSE_H

#include "snsresponse.h"
#include "setsubscriptionattributesrequest.h"

namespace QtAws {
namespace Sns {

class SetSubscriptionAttributesResponsePrivate;

class QTAWSSNS_EXPORT SetSubscriptionAttributesResponse : public SnsResponse {
    Q_OBJECT

public:
    SetSubscriptionAttributesResponse(const SetSubscriptionAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetSubscriptionAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetSubscriptionAttributesResponse)
    Q_DISABLE_COPY(SetSubscriptionAttributesResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
