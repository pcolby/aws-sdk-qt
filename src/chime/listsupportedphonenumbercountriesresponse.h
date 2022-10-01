// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUPPORTEDPHONENUMBERCOUNTRIESRESPONSE_H
#define QTAWS_LISTSUPPORTEDPHONENUMBERCOUNTRIESRESPONSE_H

#include "chimeresponse.h"
#include "listsupportedphonenumbercountriesrequest.h"

namespace QtAws {
namespace Chime {

class ListSupportedPhoneNumberCountriesResponsePrivate;

class QTAWSCHIME_EXPORT ListSupportedPhoneNumberCountriesResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListSupportedPhoneNumberCountriesResponse(const ListSupportedPhoneNumberCountriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSupportedPhoneNumberCountriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSupportedPhoneNumberCountriesResponse)
    Q_DISABLE_COPY(ListSupportedPhoneNumberCountriesResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
