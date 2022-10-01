// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARTITIONINDEXREQUEST_H
#define QTAWS_DELETEPARTITIONINDEXREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeletePartitionIndexRequestPrivate;

class QTAWSGLUE_EXPORT DeletePartitionIndexRequest : public GlueRequest {

public:
    DeletePartitionIndexRequest(const DeletePartitionIndexRequest &other);
    DeletePartitionIndexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePartitionIndexRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
