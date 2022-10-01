// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXTENSIONASSOCIATIONRESPONSE_H
#define QTAWS_CREATEEXTENSIONASSOCIATIONRESPONSE_H

#include "appconfigresponse.h"
#include "createextensionassociationrequest.h"

namespace QtAws {
namespace AppConfig {

class CreateExtensionAssociationResponsePrivate;

class QTAWSAPPCONFIG_EXPORT CreateExtensionAssociationResponse : public AppConfigResponse {
    Q_OBJECT

public:
    CreateExtensionAssociationResponse(const CreateExtensionAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateExtensionAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExtensionAssociationResponse)
    Q_DISABLE_COPY(CreateExtensionAssociationResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
