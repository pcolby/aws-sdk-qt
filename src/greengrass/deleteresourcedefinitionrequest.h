// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEDEFINITIONREQUEST_H
#define QTAWS_DELETERESOURCEDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteResourceDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT DeleteResourceDefinitionRequest : public GreengrassRequest {

public:
    DeleteResourceDefinitionRequest(const DeleteResourceDefinitionRequest &other);
    DeleteResourceDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
