// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONDEFINITIONSREQUEST_H
#define QTAWS_LISTFUNCTIONDEFINITIONSREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class ListFunctionDefinitionsRequestPrivate;

class QTAWSGREENGRASS_EXPORT ListFunctionDefinitionsRequest : public GreengrassRequest {

public:
    ListFunctionDefinitionsRequest(const ListFunctionDefinitionsRequest &other);
    ListFunctionDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFunctionDefinitionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
