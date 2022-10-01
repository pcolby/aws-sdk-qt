// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCOMMANDREQUEST_H
#define QTAWS_CANCELCOMMANDREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class CancelCommandRequestPrivate;

class QTAWSSSM_EXPORT CancelCommandRequest : public SsmRequest {

public:
    CancelCommandRequest(const CancelCommandRequest &other);
    CancelCommandRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelCommandRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
