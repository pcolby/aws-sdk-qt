// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSISTANTSRESPONSE_H
#define QTAWS_LISTASSISTANTSRESPONSE_H

#include "wisdomresponse.h"
#include "listassistantsrequest.h"

namespace QtAws {
namespace Wisdom {

class ListAssistantsResponsePrivate;

class QTAWSWISDOM_EXPORT ListAssistantsResponse : public WisdomResponse {
    Q_OBJECT

public:
    ListAssistantsResponse(const ListAssistantsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssistantsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssistantsResponse)
    Q_DISABLE_COPY(ListAssistantsResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
