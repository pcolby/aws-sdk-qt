// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETBLUEPRINTSREQUEST_H
#define QTAWS_BATCHGETBLUEPRINTSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class BatchGetBlueprintsRequestPrivate;

class QTAWSGLUE_EXPORT BatchGetBlueprintsRequest : public GlueRequest {

public:
    BatchGetBlueprintsRequest(const BatchGetBlueprintsRequest &other);
    BatchGetBlueprintsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetBlueprintsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
