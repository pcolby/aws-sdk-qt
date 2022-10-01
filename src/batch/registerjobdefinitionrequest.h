// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERJOBDEFINITIONREQUEST_H
#define QTAWS_REGISTERJOBDEFINITIONREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class RegisterJobDefinitionRequestPrivate;

class QTAWSBATCH_EXPORT RegisterJobDefinitionRequest : public BatchRequest {

public:
    RegisterJobDefinitionRequest(const RegisterJobDefinitionRequest &other);
    RegisterJobDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterJobDefinitionRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
