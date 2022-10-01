// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELINKRESPONSE_H
#define QTAWS_CREATELINKRESPONSE_H

#include "networkmanagerresponse.h"
#include "createlinkrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateLinkResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateLinkResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    CreateLinkResponse(const CreateLinkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLinkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLinkResponse)
    Q_DISABLE_COPY(CreateLinkResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
