// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONREVISIONSREQUEST_H
#define QTAWS_LISTCONFIGURATIONREVISIONSREQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class ListConfigurationRevisionsRequestPrivate;

class QTAWSKAFKA_EXPORT ListConfigurationRevisionsRequest : public KafkaRequest {

public:
    ListConfigurationRevisionsRequest(const ListConfigurationRevisionsRequest &other);
    ListConfigurationRevisionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConfigurationRevisionsRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
