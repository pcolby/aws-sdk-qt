// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXTENSIONASSOCIATIONRESPONSE_H
#define QTAWS_DELETEEXTENSIONASSOCIATIONRESPONSE_H

#include "appconfigresponse.h"
#include "deleteextensionassociationrequest.h"

namespace QtAws {
namespace AppConfig {

class DeleteExtensionAssociationResponsePrivate;

class QTAWSAPPCONFIG_EXPORT DeleteExtensionAssociationResponse : public AppConfigResponse {
    Q_OBJECT

public:
    DeleteExtensionAssociationResponse(const DeleteExtensionAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteExtensionAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExtensionAssociationResponse)
    Q_DISABLE_COPY(DeleteExtensionAssociationResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
