// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBSCRIPTIONDEFINITIONRESPONSE_H
#define QTAWS_GETSUBSCRIPTIONDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "getsubscriptiondefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetSubscriptionDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetSubscriptionDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetSubscriptionDefinitionResponse(const GetSubscriptionDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSubscriptionDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSubscriptionDefinitionResponse)
    Q_DISABLE_COPY(GetSubscriptionDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
