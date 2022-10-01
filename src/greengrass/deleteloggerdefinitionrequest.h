// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGGERDEFINITIONREQUEST_H
#define QTAWS_DELETELOGGERDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteLoggerDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT DeleteLoggerDefinitionRequest : public GreengrassRequest {

public:
    DeleteLoggerDefinitionRequest(const DeleteLoggerDefinitionRequest &other);
    DeleteLoggerDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLoggerDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
