// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADLAYERPARTREQUEST_P_H
#define QTAWS_UPLOADLAYERPARTREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "uploadlayerpartrequest.h"

namespace QtAws {
namespace EcrPublic {

class UploadLayerPartRequest;

class UploadLayerPartRequestPrivate : public EcrPublicRequestPrivate {

public:
    UploadLayerPartRequestPrivate(const EcrPublicRequest::Action action,
                                   UploadLayerPartRequest * const q);
    UploadLayerPartRequestPrivate(const UploadLayerPartRequestPrivate &other,
                                   UploadLayerPartRequest * const q);

private:
    Q_DECLARE_PUBLIC(UploadLayerPartRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
