// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFRAUDSTERRESPONSE_H
#define QTAWS_DELETEFRAUDSTERRESPONSE_H

#include "voiceidresponse.h"
#include "deletefraudsterrequest.h"

namespace QtAws {
namespace VoiceId {

class DeleteFraudsterResponsePrivate;

class QTAWSVOICEID_EXPORT DeleteFraudsterResponse : public VoiceIdResponse {
    Q_OBJECT

public:
    DeleteFraudsterResponse(const DeleteFraudsterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFraudsterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFraudsterResponse)
    Q_DISABLE_COPY(DeleteFraudsterResponse)

};

} // namespace VoiceId
} // namespace QtAws

#endif
