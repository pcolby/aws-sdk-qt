// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUNFILTEREDPARTITIONMETADATAREQUEST_H
#define QTAWS_GETUNFILTEREDPARTITIONMETADATAREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetUnfilteredPartitionMetadataRequestPrivate;

class QTAWSGLUE_EXPORT GetUnfilteredPartitionMetadataRequest : public GlueRequest {

public:
    GetUnfilteredPartitionMetadataRequest(const GetUnfilteredPartitionMetadataRequest &other);
    GetUnfilteredPartitionMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUnfilteredPartitionMetadataRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
