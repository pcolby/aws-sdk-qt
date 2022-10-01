// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDSOURCEIDENTIFIERTOSUBSCRIPTIONRESPONSE_H
#define QTAWS_ADDSOURCEIDENTIFIERTOSUBSCRIPTIONRESPONSE_H

#include "neptuneresponse.h"
#include "addsourceidentifiertosubscriptionrequest.h"

namespace QtAws {
namespace Neptune {

class AddSourceIdentifierToSubscriptionResponsePrivate;

class QTAWSNEPTUNE_EXPORT AddSourceIdentifierToSubscriptionResponse : public NeptuneResponse {
    Q_OBJECT

public:
    AddSourceIdentifierToSubscriptionResponse(const AddSourceIdentifierToSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddSourceIdentifierToSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddSourceIdentifierToSubscriptionResponse)
    Q_DISABLE_COPY(AddSourceIdentifierToSubscriptionResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
