// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHADDRESSBOOKSRESPONSE_H
#define QTAWS_SEARCHADDRESSBOOKSRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "searchaddressbooksrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchAddressBooksResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT SearchAddressBooksResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    SearchAddressBooksResponse(const SearchAddressBooksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchAddressBooksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchAddressBooksResponse)
    Q_DISABLE_COPY(SearchAddressBooksResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
