// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCESSCONTROLCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEACCESSCONTROLCONFIGURATIONREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class UpdateAccessControlConfigurationRequestPrivate;

class QTAWSKENDRA_EXPORT UpdateAccessControlConfigurationRequest : public KendraRequest {

public:
    UpdateAccessControlConfigurationRequest(const UpdateAccessControlConfigurationRequest &other);
    UpdateAccessControlConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccessControlConfigurationRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
