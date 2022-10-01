// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHVOCABULARIESRESPONSE_H
#define QTAWS_SEARCHVOCABULARIESRESPONSE_H

#include "connectresponse.h"
#include "searchvocabulariesrequest.h"

namespace QtAws {
namespace Connect {

class SearchVocabulariesResponsePrivate;

class QTAWSCONNECT_EXPORT SearchVocabulariesResponse : public ConnectResponse {
    Q_OBJECT

public:
    SearchVocabulariesResponse(const SearchVocabulariesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchVocabulariesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchVocabulariesResponse)
    Q_DISABLE_COPY(SearchVocabulariesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
