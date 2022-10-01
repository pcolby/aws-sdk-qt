// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETETABLEVERSIONREQUEST_H
#define QTAWS_BATCHDELETETABLEVERSIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class BatchDeleteTableVersionRequestPrivate;

class QTAWSGLUE_EXPORT BatchDeleteTableVersionRequest : public GlueRequest {

public:
    BatchDeleteTableVersionRequest(const BatchDeleteTableVersionRequest &other);
    BatchDeleteTableVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteTableVersionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
