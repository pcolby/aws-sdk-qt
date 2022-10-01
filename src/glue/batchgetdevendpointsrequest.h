// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEVENDPOINTSREQUEST_H
#define QTAWS_BATCHGETDEVENDPOINTSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class BatchGetDevEndpointsRequestPrivate;

class QTAWSGLUE_EXPORT BatchGetDevEndpointsRequest : public GlueRequest {

public:
    BatchGetDevEndpointsRequest(const BatchGetDevEndpointsRequest &other);
    BatchGetDevEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetDevEndpointsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
