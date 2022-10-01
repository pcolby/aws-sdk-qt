// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSCONTROLCONFIGURATIONREQUEST_H
#define QTAWS_DELETEACCESSCONTROLCONFIGURATIONREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class DeleteAccessControlConfigurationRequestPrivate;

class QTAWSKENDRA_EXPORT DeleteAccessControlConfigurationRequest : public KendraRequest {

public:
    DeleteAccessControlConfigurationRequest(const DeleteAccessControlConfigurationRequest &other);
    DeleteAccessControlConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccessControlConfigurationRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
