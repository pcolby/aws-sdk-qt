// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETEMPLATESYNCCONFIGREQUEST_H
#define QTAWS_DELETETEMPLATESYNCCONFIGREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class DeleteTemplateSyncConfigRequestPrivate;

class QTAWSPROTON_EXPORT DeleteTemplateSyncConfigRequest : public ProtonRequest {

public:
    DeleteTemplateSyncConfigRequest(const DeleteTemplateSyncConfigRequest &other);
    DeleteTemplateSyncConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTemplateSyncConfigRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
