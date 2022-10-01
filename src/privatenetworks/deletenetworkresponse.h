// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKRESPONSE_H
#define QTAWS_DELETENETWORKRESPONSE_H

#include "privatenetworksresponse.h"
#include "deletenetworkrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class DeleteNetworkResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT DeleteNetworkResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    DeleteNetworkResponse(const DeleteNetworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNetworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkResponse)
    Q_DISABLE_COPY(DeleteNetworkResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
