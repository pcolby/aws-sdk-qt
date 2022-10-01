// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTITIONINDEXREQUEST_H
#define QTAWS_CREATEPARTITIONINDEXREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CreatePartitionIndexRequestPrivate;

class QTAWSGLUE_EXPORT CreatePartitionIndexRequest : public GlueRequest {

public:
    CreatePartitionIndexRequest(const CreatePartitionIndexRequest &other);
    CreatePartitionIndexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePartitionIndexRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
