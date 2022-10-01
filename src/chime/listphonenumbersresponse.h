// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHONENUMBERSRESPONSE_H
#define QTAWS_LISTPHONENUMBERSRESPONSE_H

#include "chimeresponse.h"
#include "listphonenumbersrequest.h"

namespace QtAws {
namespace Chime {

class ListPhoneNumbersResponsePrivate;

class QTAWSCHIME_EXPORT ListPhoneNumbersResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListPhoneNumbersResponse(const ListPhoneNumbersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPhoneNumbersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPhoneNumbersResponse)
    Q_DISABLE_COPY(ListPhoneNumbersResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
