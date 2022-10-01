// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVESOURCEIDENTIFIERFROMSUBSCRIPTIONRESPONSE_H
#define QTAWS_REMOVESOURCEIDENTIFIERFROMSUBSCRIPTIONRESPONSE_H

#include "rdsresponse.h"
#include "removesourceidentifierfromsubscriptionrequest.h"

namespace QtAws {
namespace Rds {

class RemoveSourceIdentifierFromSubscriptionResponsePrivate;

class QTAWSRDS_EXPORT RemoveSourceIdentifierFromSubscriptionResponse : public RdsResponse {
    Q_OBJECT

public:
    RemoveSourceIdentifierFromSubscriptionResponse(const RemoveSourceIdentifierFromSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveSourceIdentifierFromSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveSourceIdentifierFromSubscriptionResponse)
    Q_DISABLE_COPY(RemoveSourceIdentifierFromSubscriptionResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
