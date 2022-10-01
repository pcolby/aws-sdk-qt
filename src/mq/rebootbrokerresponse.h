// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTBROKERRESPONSE_H
#define QTAWS_REBOOTBROKERRESPONSE_H

#include "mqresponse.h"
#include "rebootbrokerrequest.h"

namespace QtAws {
namespace Mq {

class RebootBrokerResponsePrivate;

class QTAWSMQ_EXPORT RebootBrokerResponse : public MqResponse {
    Q_OBJECT

public:
    RebootBrokerResponse(const RebootBrokerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RebootBrokerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootBrokerResponse)
    Q_DISABLE_COPY(RebootBrokerResponse)

};

} // namespace Mq
} // namespace QtAws

#endif
