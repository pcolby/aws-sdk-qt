// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESESSIONRESPONSE_H
#define QTAWS_CREATESESSIONRESPONSE_H

#include "wisdomresponse.h"
#include "createsessionrequest.h"

namespace QtAws {
namespace Wisdom {

class CreateSessionResponsePrivate;

class QTAWSWISDOM_EXPORT CreateSessionResponse : public WisdomResponse {
    Q_OBJECT

public:
    CreateSessionResponse(const CreateSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSessionResponse)
    Q_DISABLE_COPY(CreateSessionResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
