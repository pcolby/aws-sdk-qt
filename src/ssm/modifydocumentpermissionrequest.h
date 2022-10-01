// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDOCUMENTPERMISSIONREQUEST_H
#define QTAWS_MODIFYDOCUMENTPERMISSIONREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class ModifyDocumentPermissionRequestPrivate;

class QTAWSSSM_EXPORT ModifyDocumentPermissionRequest : public SsmRequest {

public:
    ModifyDocumentPermissionRequest(const ModifyDocumentPermissionRequest &other);
    ModifyDocumentPermissionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDocumentPermissionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
