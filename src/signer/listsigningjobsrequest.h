// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNINGJOBSREQUEST_H
#define QTAWS_LISTSIGNINGJOBSREQUEST_H

#include "signerrequest.h"

namespace QtAws {
namespace Signer {

class ListSigningJobsRequestPrivate;

class QTAWSSIGNER_EXPORT ListSigningJobsRequest : public SignerRequest {

public:
    ListSigningJobsRequest(const ListSigningJobsRequest &other);
    ListSigningJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSigningJobsRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
