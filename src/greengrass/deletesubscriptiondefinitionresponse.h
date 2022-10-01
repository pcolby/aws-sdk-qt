// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBSCRIPTIONDEFINITIONRESPONSE_H
#define QTAWS_DELETESUBSCRIPTIONDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "deletesubscriptiondefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteSubscriptionDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT DeleteSubscriptionDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    DeleteSubscriptionDefinitionResponse(const DeleteSubscriptionDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSubscriptionDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSubscriptionDefinitionResponse)
    Q_DISABLE_COPY(DeleteSubscriptionDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
