// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTRESPONSE_H
#define QTAWS_CREATEBOTRESPONSE_H

#include "chimeresponse.h"
#include "createbotrequest.h"

namespace QtAws {
namespace Chime {

class CreateBotResponsePrivate;

class QTAWSCHIME_EXPORT CreateBotResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreateBotResponse(const CreateBotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBotResponse)
    Q_DISABLE_COPY(CreateBotResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
