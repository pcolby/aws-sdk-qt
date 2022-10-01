// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARTITIONINDEXESREQUEST_H
#define QTAWS_GETPARTITIONINDEXESREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetPartitionIndexesRequestPrivate;

class QTAWSGLUE_EXPORT GetPartitionIndexesRequest : public GlueRequest {

public:
    GetPartitionIndexesRequest(const GetPartitionIndexesRequest &other);
    GetPartitionIndexesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPartitionIndexesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
