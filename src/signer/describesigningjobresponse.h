// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIGNINGJOBRESPONSE_H
#define QTAWS_DESCRIBESIGNINGJOBRESPONSE_H

#include "signerresponse.h"
#include "describesigningjobrequest.h"

namespace QtAws {
namespace Signer {

class DescribeSigningJobResponsePrivate;

class QTAWSSIGNER_EXPORT DescribeSigningJobResponse : public SignerResponse {
    Q_OBJECT

public:
    DescribeSigningJobResponse(const DescribeSigningJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSigningJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSigningJobResponse)
    Q_DISABLE_COPY(DescribeSigningJobResponse)

};

} // namespace Signer
} // namespace QtAws

#endif
