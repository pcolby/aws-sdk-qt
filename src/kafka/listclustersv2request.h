// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTERSV2REQUEST_H
#define QTAWS_LISTCLUSTERSV2REQUEST_H

#include "kafkarequest.h"

namespace QtAws {
namespace Kafka {

class ListClustersV2RequestPrivate;

class QTAWSKAFKA_EXPORT ListClustersV2Request : public KafkaRequest {

public:
    ListClustersV2Request(const ListClustersV2Request &other);
    ListClustersV2Request();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListClustersV2Request)

};

} // namespace Kafka
} // namespace QtAws

#endif
