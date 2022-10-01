// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROKERRESPONSE_H
#define QTAWS_UPDATEBROKERRESPONSE_H

#include "mqresponse.h"
#include "updatebrokerrequest.h"

namespace QtAws {
namespace Mq {

class UpdateBrokerResponsePrivate;

class QTAWSMQ_EXPORT UpdateBrokerResponse : public MqResponse {
    Q_OBJECT

public:
    UpdateBrokerResponse(const UpdateBrokerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBrokerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBrokerResponse)
    Q_DISABLE_COPY(UpdateBrokerResponse)

};

} // namespace Mq
} // namespace QtAws

#endif
