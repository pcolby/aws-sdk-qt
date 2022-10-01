// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESHARDCOUNTREQUEST_H
#define QTAWS_UPDATESHARDCOUNTREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class UpdateShardCountRequestPrivate;

class QTAWSKINESIS_EXPORT UpdateShardCountRequest : public KinesisRequest {

public:
    UpdateShardCountRequest(const UpdateShardCountRequest &other);
    UpdateShardCountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateShardCountRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
