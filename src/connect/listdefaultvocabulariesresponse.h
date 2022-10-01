// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEFAULTVOCABULARIESRESPONSE_H
#define QTAWS_LISTDEFAULTVOCABULARIESRESPONSE_H

#include "connectresponse.h"
#include "listdefaultvocabulariesrequest.h"

namespace QtAws {
namespace Connect {

class ListDefaultVocabulariesResponsePrivate;

class QTAWSCONNECT_EXPORT ListDefaultVocabulariesResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListDefaultVocabulariesResponse(const ListDefaultVocabulariesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDefaultVocabulariesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDefaultVocabulariesResponse)
    Q_DISABLE_COPY(ListDefaultVocabulariesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
