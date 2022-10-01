// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHAVAILABLEPHONENUMBERSRESPONSE_H
#define QTAWS_SEARCHAVAILABLEPHONENUMBERSRESPONSE_H

#include "chimeresponse.h"
#include "searchavailablephonenumbersrequest.h"

namespace QtAws {
namespace Chime {

class SearchAvailablePhoneNumbersResponsePrivate;

class QTAWSCHIME_EXPORT SearchAvailablePhoneNumbersResponse : public ChimeResponse {
    Q_OBJECT

public:
    SearchAvailablePhoneNumbersResponse(const SearchAvailablePhoneNumbersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchAvailablePhoneNumbersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchAvailablePhoneNumbersResponse)
    Q_DISABLE_COPY(SearchAvailablePhoneNumbersResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
