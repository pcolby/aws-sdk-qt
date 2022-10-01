// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYEVENTSUBSCRIPTIONRESPONSE_H
#define QTAWS_MODIFYEVENTSUBSCRIPTIONRESPONSE_H

#include "neptuneresponse.h"
#include "modifyeventsubscriptionrequest.h"

namespace QtAws {
namespace Neptune {

class ModifyEventSubscriptionResponsePrivate;

class QTAWSNEPTUNE_EXPORT ModifyEventSubscriptionResponse : public NeptuneResponse {
    Q_OBJECT

public:
    ModifyEventSubscriptionResponse(const ModifyEventSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyEventSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyEventSubscriptionResponse)
    Q_DISABLE_COPY(ModifyEventSubscriptionResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
