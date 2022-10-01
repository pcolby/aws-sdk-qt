// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETELAYERUPLOADREQUEST_H
#define QTAWS_COMPLETELAYERUPLOADREQUEST_H

#include "ecrpublicrequest.h"

namespace QtAws {
namespace EcrPublic {

class CompleteLayerUploadRequestPrivate;

class QTAWSECRPUBLIC_EXPORT CompleteLayerUploadRequest : public EcrPublicRequest {

public:
    CompleteLayerUploadRequest(const CompleteLayerUploadRequest &other);
    CompleteLayerUploadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CompleteLayerUploadRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
