// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTENSIONASSOCIATIONRESPONSE_H
#define QTAWS_GETEXTENSIONASSOCIATIONRESPONSE_H

#include "appconfigresponse.h"
#include "getextensionassociationrequest.h"

namespace QtAws {
namespace AppConfig {

class GetExtensionAssociationResponsePrivate;

class QTAWSAPPCONFIG_EXPORT GetExtensionAssociationResponse : public AppConfigResponse {
    Q_OBJECT

public:
    GetExtensionAssociationResponse(const GetExtensionAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetExtensionAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExtensionAssociationResponse)
    Q_DISABLE_COPY(GetExtensionAssociationResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
