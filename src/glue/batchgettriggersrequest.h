// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETTRIGGERSREQUEST_H
#define QTAWS_BATCHGETTRIGGERSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class BatchGetTriggersRequestPrivate;

class QTAWSGLUE_EXPORT BatchGetTriggersRequest : public GlueRequest {

public:
    BatchGetTriggersRequest(const BatchGetTriggersRequest &other);
    BatchGetTriggersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetTriggersRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
