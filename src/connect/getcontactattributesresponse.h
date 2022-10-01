// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTATTRIBUTESRESPONSE_H
#define QTAWS_GETCONTACTATTRIBUTESRESPONSE_H

#include "connectresponse.h"
#include "getcontactattributesrequest.h"

namespace QtAws {
namespace Connect {

class GetContactAttributesResponsePrivate;

class QTAWSCONNECT_EXPORT GetContactAttributesResponse : public ConnectResponse {
    Q_OBJECT

public:
    GetContactAttributesResponse(const GetContactAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContactAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContactAttributesResponse)
    Q_DISABLE_COPY(GetContactAttributesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
