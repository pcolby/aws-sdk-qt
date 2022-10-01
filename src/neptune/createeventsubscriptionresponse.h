// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTSUBSCRIPTIONRESPONSE_H
#define QTAWS_CREATEEVENTSUBSCRIPTIONRESPONSE_H

#include "neptuneresponse.h"
#include "createeventsubscriptionrequest.h"

namespace QtAws {
namespace Neptune {

class CreateEventSubscriptionResponsePrivate;

class QTAWSNEPTUNE_EXPORT CreateEventSubscriptionResponse : public NeptuneResponse {
    Q_OBJECT

public:
    CreateEventSubscriptionResponse(const CreateEventSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEventSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEventSubscriptionResponse)
    Q_DISABLE_COPY(CreateEventSubscriptionResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
