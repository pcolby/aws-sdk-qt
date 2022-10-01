// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHARDSREQUEST_H
#define QTAWS_LISTSHARDSREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class ListShardsRequestPrivate;

class QTAWSKINESIS_EXPORT ListShardsRequest : public KinesisRequest {

public:
    ListShardsRequest(const ListShardsRequest &other);
    ListShardsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListShardsRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
