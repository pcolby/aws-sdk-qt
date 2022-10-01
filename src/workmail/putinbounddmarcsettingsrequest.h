// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINBOUNDDMARCSETTINGSREQUEST_H
#define QTAWS_PUTINBOUNDDMARCSETTINGSREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class PutInboundDmarcSettingsRequestPrivate;

class QTAWSWORKMAIL_EXPORT PutInboundDmarcSettingsRequest : public WorkMailRequest {

public:
    PutInboundDmarcSettingsRequest(const PutInboundDmarcSettingsRequest &other);
    PutInboundDmarcSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutInboundDmarcSettingsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
