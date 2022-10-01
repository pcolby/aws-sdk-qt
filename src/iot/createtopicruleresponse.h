// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETOPICRULERESPONSE_H
#define QTAWS_CREATETOPICRULERESPONSE_H

#include "iotresponse.h"
#include "createtopicrulerequest.h"

namespace QtAws {
namespace IoT {

class CreateTopicRuleResponsePrivate;

class QTAWSIOT_EXPORT CreateTopicRuleResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateTopicRuleResponse(const CreateTopicRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTopicRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTopicRuleResponse)
    Q_DISABLE_COPY(CreateTopicRuleResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
