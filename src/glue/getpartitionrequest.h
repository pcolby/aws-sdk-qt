// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARTITIONREQUEST_H
#define QTAWS_GETPARTITIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetPartitionRequestPrivate;

class QTAWSGLUE_EXPORT GetPartitionRequest : public GlueRequest {

public:
    GetPartitionRequest(const GetPartitionRequest &other);
    GetPartitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
