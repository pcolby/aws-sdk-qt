// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTATTRIBUTESRESPONSE_H
#define QTAWS_UPDATECONTACTATTRIBUTESRESPONSE_H

#include "connectresponse.h"
#include "updatecontactattributesrequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactAttributesResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateContactAttributesResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateContactAttributesResponse(const UpdateContactAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateContactAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactAttributesResponse)
    Q_DISABLE_COPY(UpdateContactAttributesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
