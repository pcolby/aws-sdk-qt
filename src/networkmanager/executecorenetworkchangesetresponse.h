// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTECORENETWORKCHANGESETRESPONSE_H
#define QTAWS_EXECUTECORENETWORKCHANGESETRESPONSE_H

#include "networkmanagerresponse.h"
#include "executecorenetworkchangesetrequest.h"

namespace QtAws {
namespace NetworkManager {

class ExecuteCoreNetworkChangeSetResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT ExecuteCoreNetworkChangeSetResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    ExecuteCoreNetworkChangeSetResponse(const ExecuteCoreNetworkChangeSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExecuteCoreNetworkChangeSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteCoreNetworkChangeSetResponse)
    Q_DISABLE_COPY(ExecuteCoreNetworkChangeSetResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
