// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLITOKENRESPONSE_H
#define QTAWS_CREATECLITOKENRESPONSE_H

#include "mwaaresponse.h"
#include "createclitokenrequest.h"

namespace QtAws {
namespace Mwaa {

class CreateCliTokenResponsePrivate;

class QTAWSMWAA_EXPORT CreateCliTokenResponse : public MwaaResponse {
    Q_OBJECT

public:
    CreateCliTokenResponse(const CreateCliTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCliTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCliTokenResponse)
    Q_DISABLE_COPY(CreateCliTokenResponse)

};

} // namespace Mwaa
} // namespace QtAws

#endif
