// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBSCRIPTIONDEFINITIONRESPONSE_H
#define QTAWS_UPDATESUBSCRIPTIONDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "updatesubscriptiondefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateSubscriptionDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT UpdateSubscriptionDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    UpdateSubscriptionDefinitionResponse(const UpdateSubscriptionDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSubscriptionDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSubscriptionDefinitionResponse)
    Q_DISABLE_COPY(UpdateSubscriptionDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
