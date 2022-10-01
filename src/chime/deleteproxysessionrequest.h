// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROXYSESSIONREQUEST_H
#define QTAWS_DELETEPROXYSESSIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteProxySessionRequestPrivate;

class QTAWSCHIME_EXPORT DeleteProxySessionRequest : public ChimeRequest {

public:
    DeleteProxySessionRequest(const DeleteProxySessionRequest &other);
    DeleteProxySessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProxySessionRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
