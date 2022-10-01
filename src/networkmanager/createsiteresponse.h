// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESITERESPONSE_H
#define QTAWS_CREATESITERESPONSE_H

#include "networkmanagerresponse.h"
#include "createsiterequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateSiteResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateSiteResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    CreateSiteResponse(const CreateSiteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSiteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSiteResponse)
    Q_DISABLE_COPY(CreateSiteResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
