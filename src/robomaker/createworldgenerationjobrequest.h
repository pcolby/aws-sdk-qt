// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORLDGENERATIONJOBREQUEST_H
#define QTAWS_CREATEWORLDGENERATIONJOBREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateWorldGenerationJobRequestPrivate;

class QTAWSROBOMAKER_EXPORT CreateWorldGenerationJobRequest : public RoboMakerRequest {

public:
    CreateWorldGenerationJobRequest(const CreateWorldGenerationJobRequest &other);
    CreateWorldGenerationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorldGenerationJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
