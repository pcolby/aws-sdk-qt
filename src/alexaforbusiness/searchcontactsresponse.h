// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHCONTACTSRESPONSE_H
#define QTAWS_SEARCHCONTACTSRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "searchcontactsrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchContactsResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT SearchContactsResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    SearchContactsResponse(const SearchContactsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchContactsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchContactsResponse)
    Q_DISABLE_COPY(SearchContactsResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
