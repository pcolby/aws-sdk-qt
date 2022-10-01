// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTREFERENCESRESPONSE_H
#define QTAWS_LISTCONTACTREFERENCESRESPONSE_H

#include "connectresponse.h"
#include "listcontactreferencesrequest.h"

namespace QtAws {
namespace Connect {

class ListContactReferencesResponsePrivate;

class QTAWSCONNECT_EXPORT ListContactReferencesResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListContactReferencesResponse(const ListContactReferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListContactReferencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContactReferencesResponse)
    Q_DISABLE_COPY(ListContactReferencesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
