// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLACEROOTVOLUMETASKREQUEST_P_H
#define QTAWS_CREATEREPLACEROOTVOLUMETASKREQUEST_P_H

#include "ec2request_p.h"
#include "createreplacerootvolumetaskrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateReplaceRootVolumeTaskRequest;

class CreateReplaceRootVolumeTaskRequestPrivate : public Ec2RequestPrivate {

public:
    CreateReplaceRootVolumeTaskRequestPrivate(const Ec2Request::Action action,
                                   CreateReplaceRootVolumeTaskRequest * const q);
    CreateReplaceRootVolumeTaskRequestPrivate(const CreateReplaceRootVolumeTaskRequestPrivate &other,
                                   CreateReplaceRootVolumeTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReplaceRootVolumeTaskRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
