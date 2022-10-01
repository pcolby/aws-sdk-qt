// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOREDEFINITIONSREQUEST_H
#define QTAWS_LISTCOREDEFINITIONSREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class ListCoreDefinitionsRequestPrivate;

class QTAWSGREENGRASS_EXPORT ListCoreDefinitionsRequest : public GreengrassRequest {

public:
    ListCoreDefinitionsRequest(const ListCoreDefinitionsRequest &other);
    ListCoreDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCoreDefinitionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
