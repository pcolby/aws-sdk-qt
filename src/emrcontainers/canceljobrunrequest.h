// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOBRUNREQUEST_H
#define QTAWS_CANCELJOBRUNREQUEST_H

#include "emrcontainersrequest.h"

namespace QtAws {
namespace Emrcontainers {

class CancelJobRunRequestPrivate;

class QTAWSEMRCONTAINERS_EXPORT CancelJobRunRequest : public EmrcontainersRequest {

public:
    CancelJobRunRequest(const CancelJobRunRequest &other);
    CancelJobRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelJobRunRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
