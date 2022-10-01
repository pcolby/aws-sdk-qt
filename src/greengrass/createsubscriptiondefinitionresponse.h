// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBSCRIPTIONDEFINITIONRESPONSE_H
#define QTAWS_CREATESUBSCRIPTIONDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "createsubscriptiondefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateSubscriptionDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT CreateSubscriptionDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    CreateSubscriptionDefinitionResponse(const CreateSubscriptionDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSubscriptionDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSubscriptionDefinitionResponse)
    Q_DISABLE_COPY(CreateSubscriptionDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
