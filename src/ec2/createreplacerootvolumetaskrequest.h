// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLACEROOTVOLUMETASKREQUEST_H
#define QTAWS_CREATEREPLACEROOTVOLUMETASKREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateReplaceRootVolumeTaskRequestPrivate;

class QTAWSEC2_EXPORT CreateReplaceRootVolumeTaskRequest : public Ec2Request {

public:
    CreateReplaceRootVolumeTaskRequest(const CreateReplaceRootVolumeTaskRequest &other);
    CreateReplaceRootVolumeTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReplaceRootVolumeTaskRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
