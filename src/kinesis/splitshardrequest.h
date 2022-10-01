// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SPLITSHARDREQUEST_H
#define QTAWS_SPLITSHARDREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class SplitShardRequestPrivate;

class QTAWSKINESIS_EXPORT SplitShardRequest : public KinesisRequest {

public:
    SplitShardRequest(const SplitShardRequest &other);
    SplitShardRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SplitShardRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
