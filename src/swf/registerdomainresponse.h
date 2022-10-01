// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDOMAINRESPONSE_H
#define QTAWS_REGISTERDOMAINRESPONSE_H

#include "swfresponse.h"
#include "registerdomainrequest.h"

namespace QtAws {
namespace Swf {

class RegisterDomainResponsePrivate;

class QTAWSSWF_EXPORT RegisterDomainResponse : public SwfResponse {
    Q_OBJECT

public:
    RegisterDomainResponse(const RegisterDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterDomainResponse)
    Q_DISABLE_COPY(RegisterDomainResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
