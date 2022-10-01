// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBROKERSRESPONSE_H
#define QTAWS_LISTBROKERSRESPONSE_H

#include "mqresponse.h"
#include "listbrokersrequest.h"

namespace QtAws {
namespace Mq {

class ListBrokersResponsePrivate;

class QTAWSMQ_EXPORT ListBrokersResponse : public MqResponse {
    Q_OBJECT

public:
    ListBrokersResponse(const ListBrokersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBrokersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBrokersResponse)
    Q_DISABLE_COPY(ListBrokersResponse)

};

} // namespace Mq
} // namespace QtAws

#endif
