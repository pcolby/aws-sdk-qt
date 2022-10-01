// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETELAYERUPLOADREQUEST_H
#define QTAWS_COMPLETELAYERUPLOADREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class CompleteLayerUploadRequestPrivate;

class QTAWSECR_EXPORT CompleteLayerUploadRequest : public EcrRequest {

public:
    CompleteLayerUploadRequest(const CompleteLayerUploadRequest &other);
    CompleteLayerUploadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CompleteLayerUploadRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
