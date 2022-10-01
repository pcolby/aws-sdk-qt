// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOPICRULESRESPONSE_H
#define QTAWS_LISTTOPICRULESRESPONSE_H

#include "iotresponse.h"
#include "listtopicrulesrequest.h"

namespace QtAws {
namespace IoT {

class ListTopicRulesResponsePrivate;

class QTAWSIOT_EXPORT ListTopicRulesResponse : public IoTResponse {
    Q_OBJECT

public:
    ListTopicRulesResponse(const ListTopicRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTopicRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTopicRulesResponse)
    Q_DISABLE_COPY(ListTopicRulesResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
