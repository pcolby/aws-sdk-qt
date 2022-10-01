// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIONASSOCIATIONSREQUEST_H
#define QTAWS_LISTEXTENSIONASSOCIATIONSREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class ListExtensionAssociationsRequestPrivate;

class QTAWSAPPCONFIG_EXPORT ListExtensionAssociationsRequest : public AppConfigRequest {

public:
    ListExtensionAssociationsRequest(const ListExtensionAssociationsRequest &other);
    ListExtensionAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExtensionAssociationsRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
