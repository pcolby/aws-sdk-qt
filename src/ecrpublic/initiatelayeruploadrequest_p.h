// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATELAYERUPLOADREQUEST_P_H
#define QTAWS_INITIATELAYERUPLOADREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "initiatelayeruploadrequest.h"

namespace QtAws {
namespace EcrPublic {

class InitiateLayerUploadRequest;

class InitiateLayerUploadRequestPrivate : public EcrPublicRequestPrivate {

public:
    InitiateLayerUploadRequestPrivate(const EcrPublicRequest::Action action,
                                   InitiateLayerUploadRequest * const q);
    InitiateLayerUploadRequestPrivate(const InitiateLayerUploadRequestPrivate &other,
                                   InitiateLayerUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(InitiateLayerUploadRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
