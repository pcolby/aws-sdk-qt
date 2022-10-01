// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYRESPONSE_H
#define QTAWS_UPDATESECURITYRESPONSE_H

#include "kafkaresponse.h"
#include "updatesecurityrequest.h"

namespace QtAws {
namespace Kafka {

class UpdateSecurityResponsePrivate;

class QTAWSKAFKA_EXPORT UpdateSecurityResponse : public KafkaResponse {
    Q_OBJECT

public:
    UpdateSecurityResponse(const UpdateSecurityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSecurityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSecurityResponse)
    Q_DISABLE_COPY(UpdateSecurityResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
