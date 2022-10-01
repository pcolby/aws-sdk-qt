// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERORDERSRESPONSE_H
#define QTAWS_LISTPHONENUMBERORDERSRESPONSE_H

#include "chimeresponse.h"
#include "listphonenumberordersrequest.h"

namespace QtAws {
namespace Chime {

class ListPhoneNumberOrdersResponsePrivate;

class QTAWSCHIME_EXPORT ListPhoneNumberOrdersResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListPhoneNumberOrdersResponse(const ListPhoneNumberOrdersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPhoneNumberOrdersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPhoneNumberOrdersResponse)
    Q_DISABLE_COPY(ListPhoneNumberOrdersResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
