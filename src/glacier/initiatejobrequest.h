// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEJOBREQUEST_H
#define QTAWS_INITIATEJOBREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class InitiateJobRequestPrivate;

class QTAWSGLACIER_EXPORT InitiateJobRequest : public GlacierRequest {

public:
    InitiateJobRequest(const InitiateJobRequest &other);
    InitiateJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitiateJobRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
