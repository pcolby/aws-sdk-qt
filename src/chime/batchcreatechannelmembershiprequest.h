// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATECHANNELMEMBERSHIPREQUEST_H
#define QTAWS_BATCHCREATECHANNELMEMBERSHIPREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class BatchCreateChannelMembershipRequestPrivate;

class QTAWSCHIME_EXPORT BatchCreateChannelMembershipRequest : public ChimeRequest {

public:
    BatchCreateChannelMembershipRequest(const BatchCreateChannelMembershipRequest &other);
    BatchCreateChannelMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchCreateChannelMembershipRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
