// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROXYSESSIONREQUEST_H
#define QTAWS_CREATEPROXYSESSIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class CreateProxySessionRequestPrivate;

class QTAWSCHIME_EXPORT CreateProxySessionRequest : public ChimeRequest {

public:
    CreateProxySessionRequest(const CreateProxySessionRequest &other);
    CreateProxySessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProxySessionRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
