// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEATTRIBUTESRESPONSE_H
#define QTAWS_LISTINSTANCEATTRIBUTESRESPONSE_H

#include "connectresponse.h"
#include "listinstanceattributesrequest.h"

namespace QtAws {
namespace Connect {

class ListInstanceAttributesResponsePrivate;

class QTAWSCONNECT_EXPORT ListInstanceAttributesResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListInstanceAttributesResponse(const ListInstanceAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInstanceAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInstanceAttributesResponse)
    Q_DISABLE_COPY(ListInstanceAttributesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
