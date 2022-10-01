// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATELAYERUPLOADREQUEST_H
#define QTAWS_INITIATELAYERUPLOADREQUEST_H

#include "ecrpublicrequest.h"

namespace QtAws {
namespace EcrPublic {

class InitiateLayerUploadRequestPrivate;

class QTAWSECRPUBLIC_EXPORT InitiateLayerUploadRequest : public EcrPublicRequest {

public:
    InitiateLayerUploadRequest(const InitiateLayerUploadRequest &other);
    InitiateLayerUploadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitiateLayerUploadRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
