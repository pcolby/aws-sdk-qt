// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYKEYSRESPONSE_H
#define QTAWS_LISTSECURITYKEYSRESPONSE_H

#include "connectresponse.h"
#include "listsecuritykeysrequest.h"

namespace QtAws {
namespace Connect {

class ListSecurityKeysResponsePrivate;

class QTAWSCONNECT_EXPORT ListSecurityKeysResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListSecurityKeysResponse(const ListSecurityKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSecurityKeysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSecurityKeysResponse)
    Q_DISABLE_COPY(ListSecurityKeysResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
