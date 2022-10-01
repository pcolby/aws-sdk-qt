// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBROKERRESPONSE_H
#define QTAWS_CREATEBROKERRESPONSE_H

#include "mqresponse.h"
#include "createbrokerrequest.h"

namespace QtAws {
namespace Mq {

class CreateBrokerResponsePrivate;

class QTAWSMQ_EXPORT CreateBrokerResponse : public MqResponse {
    Q_OBJECT

public:
    CreateBrokerResponse(const CreateBrokerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBrokerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBrokerResponse)
    Q_DISABLE_COPY(CreateBrokerResponse)

};

} // namespace Mq
} // namespace QtAws

#endif
