// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHROOMSRESPONSE_H
#define QTAWS_SEARCHROOMSRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "searchroomsrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchRoomsResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT SearchRoomsResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    SearchRoomsResponse(const SearchRoomsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchRoomsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchRoomsResponse)
    Q_DISABLE_COPY(SearchRoomsResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
