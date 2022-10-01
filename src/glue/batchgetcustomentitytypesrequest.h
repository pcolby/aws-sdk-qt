// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETCUSTOMENTITYTYPESREQUEST_H
#define QTAWS_BATCHGETCUSTOMENTITYTYPESREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class BatchGetCustomEntityTypesRequestPrivate;

class QTAWSGLUE_EXPORT BatchGetCustomEntityTypesRequest : public GlueRequest {

public:
    BatchGetCustomEntityTypesRequest(const BatchGetCustomEntityTypesRequest &other);
    BatchGetCustomEntityTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetCustomEntityTypesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
