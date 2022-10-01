// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXTENSIONASSOCIATIONRESPONSE_H
#define QTAWS_UPDATEEXTENSIONASSOCIATIONRESPONSE_H

#include "appconfigresponse.h"
#include "updateextensionassociationrequest.h"

namespace QtAws {
namespace AppConfig {

class UpdateExtensionAssociationResponsePrivate;

class QTAWSAPPCONFIG_EXPORT UpdateExtensionAssociationResponse : public AppConfigResponse {
    Q_OBJECT

public:
    UpdateExtensionAssociationResponse(const UpdateExtensionAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateExtensionAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateExtensionAssociationResponse)
    Q_DISABLE_COPY(UpdateExtensionAssociationResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
