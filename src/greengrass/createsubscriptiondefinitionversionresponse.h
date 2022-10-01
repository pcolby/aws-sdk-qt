// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBSCRIPTIONDEFINITIONVERSIONRESPONSE_H
#define QTAWS_CREATESUBSCRIPTIONDEFINITIONVERSIONRESPONSE_H

#include "greengrassresponse.h"
#include "createsubscriptiondefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateSubscriptionDefinitionVersionResponsePrivate;

class QTAWSGREENGRASS_EXPORT CreateSubscriptionDefinitionVersionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    CreateSubscriptionDefinitionVersionResponse(const CreateSubscriptionDefinitionVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSubscriptionDefinitionVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSubscriptionDefinitionVersionResponse)
    Q_DISABLE_COPY(CreateSubscriptionDefinitionVersionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
