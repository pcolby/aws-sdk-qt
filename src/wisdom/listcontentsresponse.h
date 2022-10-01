// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTENTSRESPONSE_H
#define QTAWS_LISTCONTENTSRESPONSE_H

#include "wisdomresponse.h"
#include "listcontentsrequest.h"

namespace QtAws {
namespace Wisdom {

class ListContentsResponsePrivate;

class QTAWSWISDOM_EXPORT ListContentsResponse : public WisdomResponse {
    Q_OBJECT

public:
    ListContentsResponse(const ListContentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListContentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContentsResponse)
    Q_DISABLE_COPY(ListContentsResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
