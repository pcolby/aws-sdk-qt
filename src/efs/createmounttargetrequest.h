// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMOUNTTARGETREQUEST_H
#define QTAWS_CREATEMOUNTTARGETREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class CreateMountTargetRequestPrivate;

class QTAWSEFS_EXPORT CreateMountTargetRequest : public EfsRequest {

public:
    CreateMountTargetRequest(const CreateMountTargetRequest &other);
    CreateMountTargetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMountTargetRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
