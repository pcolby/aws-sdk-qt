// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARAMETERREQUEST_H
#define QTAWS_DELETEPARAMETERREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteParameterRequestPrivate;

class QTAWSSSM_EXPORT DeleteParameterRequest : public SsmRequest {

public:
    DeleteParameterRequest(const DeleteParameterRequest &other);
    DeleteParameterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteParameterRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
