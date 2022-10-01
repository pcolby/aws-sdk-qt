// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADLAYERPARTREQUEST_H
#define QTAWS_UPLOADLAYERPARTREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class UploadLayerPartRequestPrivate;

class QTAWSECR_EXPORT UploadLayerPartRequest : public EcrRequest {

public:
    UploadLayerPartRequest(const UploadLayerPartRequest &other);
    UploadLayerPartRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadLayerPartRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
