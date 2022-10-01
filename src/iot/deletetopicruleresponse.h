// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETOPICRULERESPONSE_H
#define QTAWS_DELETETOPICRULERESPONSE_H

#include "iotresponse.h"
#include "deletetopicrulerequest.h"

namespace QtAws {
namespace IoT {

class DeleteTopicRuleResponsePrivate;

class QTAWSIOT_EXPORT DeleteTopicRuleResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteTopicRuleResponse(const DeleteTopicRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTopicRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTopicRuleResponse)
    Q_DISABLE_COPY(DeleteTopicRuleResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
