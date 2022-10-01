// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYMAILFROMDOMAINRESPONSE_H
#define QTAWS_SETIDENTITYMAILFROMDOMAINRESPONSE_H

#include "sesresponse.h"
#include "setidentitymailfromdomainrequest.h"

namespace QtAws {
namespace Ses {

class SetIdentityMailFromDomainResponsePrivate;

class QTAWSSES_EXPORT SetIdentityMailFromDomainResponse : public SesResponse {
    Q_OBJECT

public:
    SetIdentityMailFromDomainResponse(const SetIdentityMailFromDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetIdentityMailFromDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIdentityMailFromDomainResponse)
    Q_DISABLE_COPY(SetIdentityMailFromDomainResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
