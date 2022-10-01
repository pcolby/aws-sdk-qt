// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTEGRATIONRESPONSE_H
#define QTAWS_DELETEINTEGRATIONRESPONSE_H

#include "customerprofilesresponse.h"
#include "deleteintegrationrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class DeleteIntegrationResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT DeleteIntegrationResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    DeleteIntegrationResponse(const DeleteIntegrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIntegrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIntegrationResponse)
    Q_DISABLE_COPY(DeleteIntegrationResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
