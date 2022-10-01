// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETELAYERUPLOADREQUEST_P_H
#define QTAWS_COMPLETELAYERUPLOADREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "completelayeruploadrequest.h"

namespace QtAws {
namespace EcrPublic {

class CompleteLayerUploadRequest;

class CompleteLayerUploadRequestPrivate : public EcrPublicRequestPrivate {

public:
    CompleteLayerUploadRequestPrivate(const EcrPublicRequest::Action action,
                                   CompleteLayerUploadRequest * const q);
    CompleteLayerUploadRequestPrivate(const CompleteLayerUploadRequestPrivate &other,
                                   CompleteLayerUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(CompleteLayerUploadRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
