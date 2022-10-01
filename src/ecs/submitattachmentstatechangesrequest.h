// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITATTACHMENTSTATECHANGESREQUEST_H
#define QTAWS_SUBMITATTACHMENTSTATECHANGESREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class SubmitAttachmentStateChangesRequestPrivate;

class QTAWSECS_EXPORT SubmitAttachmentStateChangesRequest : public EcsRequest {

public:
    SubmitAttachmentStateChangesRequest(const SubmitAttachmentStateChangesRequest &other);
    SubmitAttachmentStateChangesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubmitAttachmentStateChangesRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
