// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSIGNINGJOBRESPONSE_H
#define QTAWS_STARTSIGNINGJOBRESPONSE_H

#include "signerresponse.h"
#include "startsigningjobrequest.h"

namespace QtAws {
namespace Signer {

class StartSigningJobResponsePrivate;

class QTAWSSIGNER_EXPORT StartSigningJobResponse : public SignerResponse {
    Q_OBJECT

public:
    StartSigningJobResponse(const StartSigningJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartSigningJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSigningJobResponse)
    Q_DISABLE_COPY(StartSigningJobResponse)

};

} // namespace Signer
} // namespace QtAws

#endif
