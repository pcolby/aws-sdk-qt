// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTASSOCIATIONSONCEREQUEST_H
#define QTAWS_STARTASSOCIATIONSONCEREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class StartAssociationsOnceRequestPrivate;

class QTAWSSSM_EXPORT StartAssociationsOnceRequest : public SsmRequest {

public:
    StartAssociationsOnceRequest(const StartAssociationsOnceRequest &other);
    StartAssociationsOnceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAssociationsOnceRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
