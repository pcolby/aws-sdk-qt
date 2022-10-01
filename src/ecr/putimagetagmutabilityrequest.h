// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGETAGMUTABILITYREQUEST_H
#define QTAWS_PUTIMAGETAGMUTABILITYREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class PutImageTagMutabilityRequestPrivate;

class QTAWSECR_EXPORT PutImageTagMutabilityRequest : public EcrRequest {

public:
    PutImageTagMutabilityRequest(const PutImageTagMutabilityRequest &other);
    PutImageTagMutabilityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutImageTagMutabilityRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
