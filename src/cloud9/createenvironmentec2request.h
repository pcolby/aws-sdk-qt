// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTEC2REQUEST_H
#define QTAWS_CREATEENVIRONMENTEC2REQUEST_H

#include "cloud9request.h"

namespace QtAws {
namespace Cloud9 {

class CreateEnvironmentEC2RequestPrivate;

class QTAWSCLOUD9_EXPORT CreateEnvironmentEC2Request : public Cloud9Request {

public:
    CreateEnvironmentEC2Request(const CreateEnvironmentEC2Request &other);
    CreateEnvironmentEC2Request();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEnvironmentEC2Request)

};

} // namespace Cloud9
} // namespace QtAws

#endif
