// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERJOBDEFINITIONREQUEST_H
#define QTAWS_DEREGISTERJOBDEFINITIONREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class DeregisterJobDefinitionRequestPrivate;

class QTAWSBATCH_EXPORT DeregisterJobDefinitionRequest : public BatchRequest {

public:
    DeregisterJobDefinitionRequest(const DeregisterJobDefinitionRequest &other);
    DeregisterJobDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterJobDefinitionRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
