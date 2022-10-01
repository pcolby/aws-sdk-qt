// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETTRACESREQUEST_H
#define QTAWS_BATCHGETTRACESREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class BatchGetTracesRequestPrivate;

class QTAWSXRAY_EXPORT BatchGetTracesRequest : public XRayRequest {

public:
    BatchGetTracesRequest(const BatchGetTracesRequest &other);
    BatchGetTracesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetTracesRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
