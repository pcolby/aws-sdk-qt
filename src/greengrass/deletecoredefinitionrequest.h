// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOREDEFINITIONREQUEST_H
#define QTAWS_DELETECOREDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteCoreDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT DeleteCoreDefinitionRequest : public GreengrassRequest {

public:
    DeleteCoreDefinitionRequest(const DeleteCoreDefinitionRequest &other);
    DeleteCoreDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCoreDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
