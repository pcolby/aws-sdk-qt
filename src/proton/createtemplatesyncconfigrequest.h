// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETEMPLATESYNCCONFIGREQUEST_H
#define QTAWS_CREATETEMPLATESYNCCONFIGREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class CreateTemplateSyncConfigRequestPrivate;

class QTAWSPROTON_EXPORT CreateTemplateSyncConfigRequest : public ProtonRequest {

public:
    CreateTemplateSyncConfigRequest(const CreateTemplateSyncConfigRequest &other);
    CreateTemplateSyncConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTemplateSyncConfigRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
