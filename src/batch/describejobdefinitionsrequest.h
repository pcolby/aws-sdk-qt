// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBDEFINITIONSREQUEST_H
#define QTAWS_DESCRIBEJOBDEFINITIONSREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class DescribeJobDefinitionsRequestPrivate;

class QTAWSBATCH_EXPORT DescribeJobDefinitionsRequest : public BatchRequest {

public:
    DescribeJobDefinitionsRequest(const DescribeJobDefinitionsRequest &other);
    DescribeJobDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobDefinitionsRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
