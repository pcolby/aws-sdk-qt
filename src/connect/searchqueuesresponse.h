// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHQUEUESRESPONSE_H
#define QTAWS_SEARCHQUEUESRESPONSE_H

#include "connectresponse.h"
#include "searchqueuesrequest.h"

namespace QtAws {
namespace Connect {

class SearchQueuesResponsePrivate;

class QTAWSCONNECT_EXPORT SearchQueuesResponse : public ConnectResponse {
    Q_OBJECT

public:
    SearchQueuesResponse(const SearchQueuesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchQueuesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchQueuesResponse)
    Q_DISABLE_COPY(SearchQueuesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
