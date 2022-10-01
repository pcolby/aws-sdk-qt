// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSRESPONSE_H
#define QTAWS_LISTEVENTSRESPONSE_H

#include "devopsgururesponse.h"
#include "listeventsrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListEventsResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT ListEventsResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    ListEventsResponse(const ListEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventsResponse)
    Q_DISABLE_COPY(ListEventsResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
