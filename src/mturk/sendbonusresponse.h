// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDBONUSRESPONSE_H
#define QTAWS_SENDBONUSRESPONSE_H

#include "mturkresponse.h"
#include "sendbonusrequest.h"

namespace QtAws {
namespace MTurk {

class SendBonusResponsePrivate;

class QTAWSMTURK_EXPORT SendBonusResponse : public MTurkResponse {
    Q_OBJECT

public:
    SendBonusResponse(const SendBonusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendBonusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendBonusResponse)
    Q_DISABLE_COPY(SendBonusResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
