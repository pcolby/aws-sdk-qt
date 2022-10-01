// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIONSREQUEST_H
#define QTAWS_LISTEXTENSIONSREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class ListExtensionsRequestPrivate;

class QTAWSAPPCONFIG_EXPORT ListExtensionsRequest : public AppConfigRequest {

public:
    ListExtensionsRequest(const ListExtensionsRequest &other);
    ListExtensionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExtensionsRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
