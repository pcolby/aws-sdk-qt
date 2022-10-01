// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETARTIFACTURLREQUEST_H
#define QTAWS_GETARTIFACTURLREQUEST_H

#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class GetArtifactUrlRequestPrivate;

class QTAWSAMPLIFY_EXPORT GetArtifactUrlRequest : public AmplifyRequest {

public:
    GetArtifactUrlRequest(const GetArtifactUrlRequest &other);
    GetArtifactUrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetArtifactUrlRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
