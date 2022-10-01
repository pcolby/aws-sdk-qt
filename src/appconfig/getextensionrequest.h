// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTENSIONREQUEST_H
#define QTAWS_GETEXTENSIONREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class GetExtensionRequestPrivate;

class QTAWSAPPCONFIG_EXPORT GetExtensionRequest : public AppConfigRequest {

public:
    GetExtensionRequest(const GetExtensionRequest &other);
    GetExtensionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExtensionRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
