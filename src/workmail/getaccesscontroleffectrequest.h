// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSCONTROLEFFECTREQUEST_H
#define QTAWS_GETACCESSCONTROLEFFECTREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class GetAccessControlEffectRequestPrivate;

class QTAWSWORKMAIL_EXPORT GetAccessControlEffectRequest : public WorkMailRequest {

public:
    GetAccessControlEffectRequest(const GetAccessControlEffectRequest &other);
    GetAccessControlEffectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessControlEffectRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
