// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERRESPONSE_H
#define QTAWS_CREATEUSERRESPONSE_H

#include "mqresponse.h"
#include "createuserrequest.h"

namespace QtAws {
namespace Mq {

class CreateUserResponsePrivate;

class QTAWSMQ_EXPORT CreateUserResponse : public MqResponse {
    Q_OBJECT

public:
    CreateUserResponse(const CreateUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserResponse)
    Q_DISABLE_COPY(CreateUserResponse)

};

} // namespace Mq
} // namespace QtAws

#endif
