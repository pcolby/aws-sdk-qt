// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPROVEDORIGINSRESPONSE_H
#define QTAWS_LISTAPPROVEDORIGINSRESPONSE_H

#include "connectresponse.h"
#include "listapprovedoriginsrequest.h"

namespace QtAws {
namespace Connect {

class ListApprovedOriginsResponsePrivate;

class QTAWSCONNECT_EXPORT ListApprovedOriginsResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListApprovedOriginsResponse(const ListApprovedOriginsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListApprovedOriginsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApprovedOriginsResponse)
    Q_DISABLE_COPY(ListApprovedOriginsResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
