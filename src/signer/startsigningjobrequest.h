// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSIGNINGJOBREQUEST_H
#define QTAWS_STARTSIGNINGJOBREQUEST_H

#include "signerrequest.h"

namespace QtAws {
namespace Signer {

class StartSigningJobRequestPrivate;

class QTAWSSIGNER_EXPORT StartSigningJobRequest : public SignerRequest {

public:
    StartSigningJobRequest(const StartSigningJobRequest &other);
    StartSigningJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSigningJobRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
