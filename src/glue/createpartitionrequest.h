// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTITIONREQUEST_H
#define QTAWS_CREATEPARTITIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CreatePartitionRequestPrivate;

class QTAWSGLUE_EXPORT CreatePartitionRequest : public GlueRequest {

public:
    CreatePartitionRequest(const CreatePartitionRequest &other);
    CreatePartitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
