// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTITEMSRESPONSE_H
#define QTAWS_PUTITEMSRESPONSE_H

#include "personalizeeventsresponse.h"
#include "putitemsrequest.h"

namespace QtAws {
namespace PersonalizeEvents {

class PutItemsResponsePrivate;

class QTAWSPERSONALIZEEVENTS_EXPORT PutItemsResponse : public PersonalizeEventsResponse {
    Q_OBJECT

public:
    PutItemsResponse(const PutItemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutItemsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutItemsResponse)
    Q_DISABLE_COPY(PutItemsResponse)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif
