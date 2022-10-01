// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBSCRIPTIONDEFINITIONVERSIONRESPONSE_H
#define QTAWS_GETSUBSCRIPTIONDEFINITIONVERSIONRESPONSE_H

#include "greengrassresponse.h"
#include "getsubscriptiondefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetSubscriptionDefinitionVersionResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetSubscriptionDefinitionVersionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetSubscriptionDefinitionVersionResponse(const GetSubscriptionDefinitionVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSubscriptionDefinitionVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSubscriptionDefinitionVersionResponse)
    Q_DISABLE_COPY(GetSubscriptionDefinitionVersionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
