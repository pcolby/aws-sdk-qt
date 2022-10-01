// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEDEFINITIONSREQUEST_H
#define QTAWS_LISTRESOURCEDEFINITIONSREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class ListResourceDefinitionsRequestPrivate;

class QTAWSGREENGRASS_EXPORT ListResourceDefinitionsRequest : public GreengrassRequest {

public:
    ListResourceDefinitionsRequest(const ListResourceDefinitionsRequest &other);
    ListResourceDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceDefinitionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
