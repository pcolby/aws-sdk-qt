// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGGERDEFINITIONREQUEST_H
#define QTAWS_UPDATELOGGERDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateLoggerDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT UpdateLoggerDefinitionRequest : public GreengrassRequest {

public:
    UpdateLoggerDefinitionRequest(const UpdateLoggerDefinitionRequest &other);
    UpdateLoggerDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLoggerDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
