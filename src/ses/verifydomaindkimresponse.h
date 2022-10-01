// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYDOMAINDKIMRESPONSE_H
#define QTAWS_VERIFYDOMAINDKIMRESPONSE_H

#include "sesresponse.h"
#include "verifydomaindkimrequest.h"

namespace QtAws {
namespace Ses {

class VerifyDomainDkimResponsePrivate;

class QTAWSSES_EXPORT VerifyDomainDkimResponse : public SesResponse {
    Q_OBJECT

public:
    VerifyDomainDkimResponse(const VerifyDomainDkimRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const VerifyDomainDkimRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifyDomainDkimResponse)
    Q_DISABLE_COPY(VerifyDomainDkimResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
