// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARAMETERSREQUEST_H
#define QTAWS_DELETEPARAMETERSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteParametersRequestPrivate;

class QTAWSSSM_EXPORT DeleteParametersRequest : public SsmRequest {

public:
    DeleteParametersRequest(const DeleteParametersRequest &other);
    DeleteParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteParametersRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
