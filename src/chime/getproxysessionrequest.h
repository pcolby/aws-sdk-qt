// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROXYSESSIONREQUEST_H
#define QTAWS_GETPROXYSESSIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetProxySessionRequestPrivate;

class QTAWSCHIME_EXPORT GetProxySessionRequest : public ChimeRequest {

public:
    GetProxySessionRequest(const GetProxySessionRequest &other);
    GetProxySessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProxySessionRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
