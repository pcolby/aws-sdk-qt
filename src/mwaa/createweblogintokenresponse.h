// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBLOGINTOKENRESPONSE_H
#define QTAWS_CREATEWEBLOGINTOKENRESPONSE_H

#include "mwaaresponse.h"
#include "createweblogintokenrequest.h"

namespace QtAws {
namespace Mwaa {

class CreateWebLoginTokenResponsePrivate;

class QTAWSMWAA_EXPORT CreateWebLoginTokenResponse : public MwaaResponse {
    Q_OBJECT

public:
    CreateWebLoginTokenResponse(const CreateWebLoginTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWebLoginTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWebLoginTokenResponse)
    Q_DISABLE_COPY(CreateWebLoginTokenResponse)

};

} // namespace Mwaa
} // namespace QtAws

#endif
