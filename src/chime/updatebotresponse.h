// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTRESPONSE_H
#define QTAWS_UPDATEBOTRESPONSE_H

#include "chimeresponse.h"
#include "updatebotrequest.h"

namespace QtAws {
namespace Chime {

class UpdateBotResponsePrivate;

class QTAWSCHIME_EXPORT UpdateBotResponse : public ChimeResponse {
    Q_OBJECT

public:
    UpdateBotResponse(const UpdateBotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBotResponse)
    Q_DISABLE_COPY(UpdateBotResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
