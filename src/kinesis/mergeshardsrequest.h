// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGESHARDSREQUEST_H
#define QTAWS_MERGESHARDSREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class MergeShardsRequestPrivate;

class QTAWSKINESIS_EXPORT MergeShardsRequest : public KinesisRequest {

public:
    MergeShardsRequest(const MergeShardsRequest &other);
    MergeShardsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergeShardsRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
