// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATESYNCCONFIGREQUEST_H
#define QTAWS_UPDATETEMPLATESYNCCONFIGREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class UpdateTemplateSyncConfigRequestPrivate;

class QTAWSPROTON_EXPORT UpdateTemplateSyncConfigRequest : public ProtonRequest {

public:
    UpdateTemplateSyncConfigRequest(const UpdateTemplateSyncConfigRequest &other);
    UpdateTemplateSyncConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTemplateSyncConfigRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
