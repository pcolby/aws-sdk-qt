// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONRESPONSE_H
#define QTAWS_CREATECONFIGURATIONRESPONSE_H

#include "mqresponse.h"
#include "createconfigurationrequest.h"

namespace QtAws {
namespace Mq {

class CreateConfigurationResponsePrivate;

class QTAWSMQ_EXPORT CreateConfigurationResponse : public MqResponse {
    Q_OBJECT

public:
    CreateConfigurationResponse(const CreateConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConfigurationResponse)
    Q_DISABLE_COPY(CreateConfigurationResponse)

};

} // namespace Mq
} // namespace QtAws

#endif
