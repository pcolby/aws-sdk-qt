// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNINGJOBSRESPONSE_H
#define QTAWS_LISTSIGNINGJOBSRESPONSE_H

#include "signerresponse.h"
#include "listsigningjobsrequest.h"

namespace QtAws {
namespace Signer {

class ListSigningJobsResponsePrivate;

class QTAWSSIGNER_EXPORT ListSigningJobsResponse : public SignerResponse {
    Q_OBJECT

public:
    ListSigningJobsResponse(const ListSigningJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSigningJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSigningJobsResponse)
    Q_DISABLE_COPY(ListSigningJobsResponse)

};

} // namespace Signer
} // namespace QtAws

#endif
