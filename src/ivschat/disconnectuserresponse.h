// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTUSERRESPONSE_H
#define QTAWS_DISCONNECTUSERRESPONSE_H

#include "ivschatresponse.h"
#include "disconnectuserrequest.h"

namespace QtAws {
namespace IvsChat {

class DisconnectUserResponsePrivate;

class QTAWSIVSCHAT_EXPORT DisconnectUserResponse : public IvsChatResponse {
    Q_OBJECT

public:
    DisconnectUserResponse(const DisconnectUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisconnectUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisconnectUserResponse)
    Q_DISABLE_COPY(DisconnectUserResponse)

};

} // namespace IvsChat
} // namespace QtAws

#endif
