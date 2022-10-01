// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYBACKUPATTRIBUTESREQUEST_H
#define QTAWS_MODIFYBACKUPATTRIBUTESREQUEST_H

#include "cloudhsmv2request.h"

namespace QtAws {
namespace CloudHsmV2 {

class ModifyBackupAttributesRequestPrivate;

class QTAWSCLOUDHSMV2_EXPORT ModifyBackupAttributesRequest : public CloudHsmV2Request {

public:
    ModifyBackupAttributesRequest(const ModifyBackupAttributesRequest &other);
    ModifyBackupAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyBackupAttributesRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
