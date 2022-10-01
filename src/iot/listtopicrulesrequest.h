// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOPICRULESREQUEST_H
#define QTAWS_LISTTOPICRULESREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListTopicRulesRequestPrivate;

class QTAWSIOT_EXPORT ListTopicRulesRequest : public IoTRequest {

public:
    ListTopicRulesRequest(const ListTopicRulesRequest &other);
    ListTopicRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTopicRulesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
