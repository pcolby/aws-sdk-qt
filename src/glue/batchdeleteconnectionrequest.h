// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETECONNECTIONREQUEST_H
#define QTAWS_BATCHDELETECONNECTIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class BatchDeleteConnectionRequestPrivate;

class QTAWSGLUE_EXPORT BatchDeleteConnectionRequest : public GlueRequest {

public:
    BatchDeleteConnectionRequest(const BatchDeleteConnectionRequest &other);
    BatchDeleteConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteConnectionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
